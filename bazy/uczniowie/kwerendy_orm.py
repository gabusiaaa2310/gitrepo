#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kwerendy_orm.py
from uczniowie_model import *

def kw01(): # zapytania na jednym modelu
    # SELECT * FROM uczen WHERE imie LIKE 'G%'; SQL
    # query = Uczen.select().where(Uczen.imie.startswith('G')) Szukanie imion na G
    # query = Uczen.select().where(Uczen.imie == 'Rafał') suzkanie Rafałów
    # SELECT COUNT(*) FROM uczen WHERE imie == 'Rafał'; SQL
    # query = Uczen.select().where(Uczen.imie == 'Rafał').count() liczenie Rafałów
    # print(query)
    # query = Uczen.select().where(Uczen.egz_mat > 40) wyniki egz powyżej 40
    query = (Uczen
        .select()
        .where(Uczen.egz_mat.between(30,35))
        .order_by(Uczen.egz_mat.asc())
    )
    for obj in query:
        print(obj.nazwisko, obj.imie, obj.egz_mat)

def kw02():
    # SELECT nazwisko, klasa FROM uczen INNER JOIN klasa ON uczen.id_klasa = klasa.id; SQL
    query = (Uczen
        .select(Uczen.nazwisko, Uczen.klasa.klasa)
        .join(Klasa)
        .where(Uczen.klasa.klasa.endswith('A'))
        .order_by(Uczen.klasa.klasa.asc())
    )
    for obj in query:
        print(obj.nazwisko, obj.klasa.klasa)

def kw03():
    """wyświetl liczbę uczniów na literę B i ich oceny"""
    query = (Ocena
        .select(Ocena.ocena, Ocena.uczen.nazwisko)
        .join(Uczen)
        .where(Ocena.uczen.nazwisko.startswith('B'))
    )
    for obj in query:
        print(obj.uczen.nazwisko, obj.ocena)
        
def kw04():
    """po ile ocen mają uczniowie uporządkowane wg ilości"""
    query = (Ocena
        .select(Ocena.uczen.nazwisko, fn.Count(Ocena.ocena).alias('ile'))
        .join(Uczen)
        .group_by(Ocena.uczen.nazwisko)
        .order_by(SQL('ile').asc())
    )
    for obj in query:
        print(obj.uczen.nazwisko, obj.ile)

def kw05():
    """po ile uczniów mają klasy, uporządkuje wdł ilości"""
    query = (Uczen
        .select(Uczen.klasa.klasa, fn.Count(Uczen.id).alias('ile'))
        .join(Klasa)
        .group_by(Uczen.klasa.klasa)
        .order_by(SQL('ile').asc())
    )
    for obj in query:
        print(obj.klasa.klasa, obj.ile)

def kw06():
    """średnia ocen z poszczególnych przedmiotów"""
    fn.AVG()
    querty = (Ocena
        .select(Ocena.przedmiot.przedmiot, fn.AVG(Ocena.ocena).alias('srednia'))
        .join(Przedmiot)
        .group_by(Ocena.przedmiot.przedmiot)
        .order_by(SQL('srednia').asc())
    )
    for obj in query:
        print(obj.przedmiot.przedmiot, obj.srednia)

def kw08():
    """oceny ucznia Szymczak z poszczególnych przedmiotów"""
    query = Uczen
        .select(Ocena.ocena, Ocena.uczen.nazwisko)
        .where(Uczen.nazwisko == 'Szymczak')
        .join(Uczen)
    )
    for obj in query:
        print(obj.uczen.nazwisko, obj.srednia)


def main(args):
    baza.connect()
    
    kw08()
    
    baza.close()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

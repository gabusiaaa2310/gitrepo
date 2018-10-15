#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  baza.py
import csv


def czytaj_dane(plik, separator=","):
    dane = [] # pusta lista na rekordy
    with open(plik, newline='', encoding='utf-8') as plikcsv:
        tresc = csv.reader(plikcsv, delimiter=separator)
        for rekord in tresc:
            dane.appednd(rekord)
    print(tresc)
        



def main(args):
    czytaj_dane('nazwiska.txt' , ' ')
    return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))

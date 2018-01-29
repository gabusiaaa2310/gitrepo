#!/usr/bin/env python
# -*- coding: utf-8 -*-


def konwersja1(liczba10, podstawa):
    """
    Funkcja zamienia liczbe dziesiętną na sysytem o podanej podstawie
    """
    liczba = []  # lista reszt
    while liczba10 != 0:
        reszta = liczba10 % podstawa  # obliczanie reszt z dzielenia
        if reszta > 9:
            reszta = chr(reszta + 55)
        liczba.append(str(reszta))
        liczba10 = int(liczba10 / podstawa)

    liczba.reverse()  # odwrócenie kolejności elementów!!!
    return "".join(liczba)  # złączenie elementów liczby w jeden ciąg tekstowy


def dec2other():
    """
    Funkcja pobiera liczbę i podstwę od użytkownika
    """
    liczba = int(input("Podaj liczbę: "))
    podstawa = int(input("Podaj podstawę: "))
    while podstawa < 2 or podstawa > 16:
        podstawa = int(input("podaj podstawę: "))
    print("Wynik konwersacji: {}(10) = {}({})".format(
        liczba, konwersja1(liczba, podstawa), podstawa))


def konwersja2(liczba, podstawa):
    """
    Funkcja konwertuje podaną liczbe w systemnie o pod podst na system dziesiętny
    """
pass
def other2dec():
    """
    Funkacja pobiera podstawę i liczbę (bin) od użytkownika
    """
    print(konwersja2())
def main(args):
    print("Zamiana liczby dziesiętnej na liczbę o podanej podstawie "
          "<2;16> lub odwrotnie")
    dec2other()
    other2dec()
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

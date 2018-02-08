#!/usr/bin/env python
# -*- coding: utf-8 -*-


def szyfruj_cezar(tekst, klucz):
    klucz = klucz % 26
    szyfrogram = ""
    for znak in tekst:
        znak = znak.upper()
        ascii = ord(znak) + klucz  # kos ascii litery zastępującej
        if ascii > 90:
            ascii -= 26
        szyfrogram += chr(ascii)
    return szyfrogram


def deszyfruj(szyfrogram, klucz):
    deszyfrogram = ""
    for znak in szyfrogram:
        ascii = ord(znak) - klucz
        if ord(znak) == 32:
            ascii = 32
        if ascii > 90 and ascii < 97:
            ascii -= 26
        if ascii > 122:
            ascii -= 26
        deszyfrogram += chr(ascii)
    return deszyfrogram

# obsłużyć spacje
# obsłużyć małe i duże litery


def main(args):
    tekst = input("POdaj tekst: ")
    klucz = int(input("Klucz: "))

    szyfrogram = szyfruj_cezar(tekst, klucz)
    print(szyfrogram)
    print(deszyfruj(szyfrogram, klucz))


    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

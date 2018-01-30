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
    Funkcja konwertuje podaną liczbe w systemnie o podanej podstawie na system dziesiętny
    """
    #  745(8) = 7 * 8^2 + 4 * 8^1 + 5
    liczba10 = 0
    potega = len(liczba) - 1
    for cyfra in liczba:
        if not cyfra.isdigit():
            liczba10 += ord(cyfra.upper()) - 55
        liczba10 += int(cyfra) * (podstawa ** potega)
        potega -= 1
    return liczba


def other2dec():
    """
    Funkacja pobiera podstawę i liczbę od użytkownika
    """
    podstawa = int(input("Podaj podstawę: "))
    liczba = input("Podaj liczbę: ")
    for i in liczba:
        if i.isdigit():
            cyfra = int(i)
        else:
            cyfra = ord(i.upper()) - 55
        if cyfra > podstawa - 1:
            print("Podałeś niedopuszczalną cyfrę!")
            return
    print("Wynik konwersji {}[10]".format(konwersja2(liczba, podstawa)))


def main(args):
    print("Zamiana liczby dziesiętnej na liczbę o podanej podstawie "
          "<2;16> lub odwrotnie")
    dec2other()
    other2dec()
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

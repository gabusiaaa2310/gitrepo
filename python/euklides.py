#!/usr/bin/env python
# -*- coding: utf-8 -*-


def nwd_v1(a, b):
    """Wersja kalsyczna"""
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a
    return a


def nwd_rek(a, b):
    if b == 0:
        return a
    return nwd_rek(b, a % b)


def nwd_v2(a, b):
    """Wersja optymalna"""
    while a > 0:
        a = a % b
        b = b - a

    return b


def main(args):
    a = int(input("Podaj liczbę naturalną: "))
    b = int(input("Podaj drugą liczbę naturalną: "))

    assert nwd_v2(5, 10) == 5
    assert nwd_v2(3, 9) == 3
    assert nwd_v2(33, 11) == 11

    print("NWD({:d}, {:d}) = {:d}".format(a, b, nwd_rek(a, b)))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

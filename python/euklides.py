#!/usr/bin/env python
# -*- coding: utf-8 -*-


def nww_v1(a, b):
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a
    return a


def main(args):
    a = int(input("Podaj liczbę naturalną: "))
    b = int(input("Podaj drugą liczbę naturalną: "))
    assert nww_v1(5, 10) == 5
    assert nww_v1(3, 9) == 3
    assert nww_v1(33, 11) == 11
    print("NWW({:d}, {:d}) = {:d}".format(a, b, nww_v1(a, b)))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

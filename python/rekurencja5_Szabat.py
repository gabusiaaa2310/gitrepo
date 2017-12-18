#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  rekurencja5_Szabat.py


def ciag(n):
    if n == 0:
        return 0
    return ciag(n - 1) + 1 + (n - 2) * 2


def main(args):
    n = int(input('Podaj wyraz ciągu: '))
    print(ciag(n))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

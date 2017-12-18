#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  rekurencja1_Szabat.py
#  
#  a1 = 1
#  a2 = 2
#  an = an-1 + 2*n + an-2


def ciag_rek(n):
    if n == 1:
        return 1
    return ciag_rek(an = an - 1 + 2 * n + an - 2)


def main(args):
    n = int(input('podaj wyraz ciągu: '))
    print(ciag_rek(n))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

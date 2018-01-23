#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  pierwsza1.py 
#  


def main(args):
    n = int(input("Podaj liczbe: "))
    i = 2
    while True:
        if i * i <= n:
            if n % i == 0:
                print("Liczba zlozona")
                break
            else:
                i += 1
        else:
            print("Liczba pierwsza")
            break

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

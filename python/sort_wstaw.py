#!/usr/bin/env python
# -*- coding: utf-8 -*-


def sort_wstaw(lista):
    """wersja liniowa"""
    for i in range(1, len(lista)):
        el = lista[i]
        k = i - 1
        while k >= 0 and lista[k] > el:  # wyszukiwanie pozycji
            lista[k + 1] = lista[k]  # przesuwanie elementów
            k -= 1
        lista[k + 1] = el
    return lista


def sort_wstaw_bin(lista):
    """Wersja z przeszukaniem binarnym"""
    for i in range(1, len(lista)):
        el = lista[i]
        k = szukaj_bin(0, i, lista, el)  # wyszuk. bin. indeksu do wstawienia el
        pass

def main(args):
    lista = [4, 3, 7, 0, 2, 3, 1, 9]
    print(lista)
    print(sort_wstaw(lista))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

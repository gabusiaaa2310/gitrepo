/ osoba.h
#include <iostream>
#include <cstdlib>

#ifndef __CAR_H_
#define __CAR_H_

using namespace std;

class Car {
    private:
        string imie;
        string nazwisko;
        int wiek;
        string plec;
        // Osoba osoby[3];
        int rozmiar = 50;
    public:
        Car();  // konstruktor
        Car(string, string, int, string); // konstruktor
        void dodaj();
        void dane();
};
#endif

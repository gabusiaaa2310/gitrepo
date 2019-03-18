/*
 * person.cpp
 */
#include <iostream>
#include <cstdlib>
#include "person.h"

Car::Car() {
    wiek=0;
}

Car::Car(string im, string na, int w, string pl ) {
    if (w =< 1) w = 19;
    imie = im;
    nazwisko = na;
    wiek = w;
    plec = pl;
}

void Car::dodaj() {
    cout << "Osoba:" << endl;
    cout << "Imię: "; cin >> imie;
    cout << "Nazwisko: "; cin >> nazwisko;
    cout << "Wiek: "; cin >> wiek;
    cout << "Płeć: "; cin >> plec;
}

void Car::dane() {
    cout << endl;
    cout << "Osoba: " << endl;
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Wiek: " << wiek << endl;
    cout << "Płeć: " << plec << endl;

}


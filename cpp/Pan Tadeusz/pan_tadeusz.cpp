/*
 * pan_tadeusz.cpp
 */


#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
using namespace std;


void zmienNazwe1(char t1[], char t2[]) {
    // kopiowanie znaków z tablicy do tablicy
    // METODA 1
    // tekst.txt
    int i=0;
    while(t1[i] != '.') {
        t2[i] = t1[i];
        i++;
    }
    t2[i]='.';
    t2[++i]='b';
    t2[++i]='a';
    t2[++i]='k';
    t2[++i]='\0';
}
void zmienNazwe2(char t1[], char t2[]) {
    // kopiowanie znaków z tablicy do tablicy
    // METODA 2
    // pantadeusz.txt
    char *wsk;
    strcpy(t2, t1);
    wsk = strstr(t2, ".txt");
    strncpy(wsk, ".bak", 4);
}
int liczZnaki(char nazwa[]) {
    char kopia[99999];
    zmienNazwe2(nazwa, kopia);
    cout << kopia << endl;
    
    // otwieranie pliku
    ifstream wejscie(nazwa);
    if (!wejscie) { cout << "Brak pliku!"; return 1; }
    
    ofstream wyjscie(kopia);
    if (!wyjscie) { cout << "Błąd pliku!"; return 1; }
    
    char znak;
    int ile;
    ile = 0;
    while(!wejscie.eof()) {
        wejscie.get(znak); // odczytanie poj. znaku
        if (znak != 'a' && znak != 'e' && znak != 'o' && znak != 'i' && znak != 'u' && znak != 'y' &&)  ile++;  // liczymy samogłoski
            wyjscie.put(znak); // zapisanie znaku do pliku
        }
        if ((int)znak == 10)
            wyjscie.put('\n');
    }
    wejscie.close(); wyjscie.close();
    cout << "Samogłosek: " << ile << endl;
    return ile;
}

// odczytaj z pliku tekst.txt liczby, w tym rzeczywiste,
// i zapisz je w pliku cyfry.txt
// 

int zapiszCyfry(char nazwa[]) {
    char kopia[999999999999999] = {"pan_tadeusz.txt"};
    // otwieranie pliku
    ifstream wejscie(nazwa);
    if (!wejscie) { cout << "Brak pliku!"; return 1; }
    ofstream wyjscie(kopia);
    if (!wyjscie) { cout << "Błąd pliku!"; return 1; }
    
    char znak;
    while(!wejscie.eof()) {
        wejscie.get(znak); // odczytanie poj. znaku
        if (wejscie && isdigit(znak)) ilenum++;  // liczymy samogłoski
        if ( (wejscie && isdigit(znak)) || znak == '.') {
            wyjscie.put(znak);
        }
        if ((int)znak == 10)
            wyjscie.put('\n');
    }
    wejscie.close(); wyjscie.close();
    return 0;
}

void sumuj(char nazwa[]){
    ifstream wejscie(nazwa);
    float liczba;
    float suma=0;
    while(!wejscie.eof()) {
        wejscie >> liczba;
        suma += liczba;
    };
    cout << "Suma: " << suma << endl;
}

int main(int argc, char **argv)
{
    char nazwa[999999999];
    cout << "Podaj nazwę pliku: ";
    cin.getline(nazwa, 99999999);
    cout << nazwa << endl;
    liczZnaki(nazwa);
    //liczZnaki(nazwa);
    //zapiszCyfry(nazwa);
    sumuj(nazwa);
    return 0;
}


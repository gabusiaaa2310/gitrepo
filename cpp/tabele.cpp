/*
 * tabele.cpp
 */


#include <iostream>
using namespace std;

void pobierzLiczby(int tab[], int ile) {
    int i=0;
    for(i=0; i<ile; i++) {
        cout<<"Podaj liczbę: ";
        cin>>tab[i];
    }
}
void sumuj (int tab[], int ile) {
    int i=0;
    int suma=0;
    for (i=0; i<ile; i++) {
        suma+=tab[i];
    }
    cout<<"Suma liczb wynosi: "<<suma<<endl;
}

int main(int argc, char **argv)
{
    int rozmiar=0;
    cout<<"Ile liczb podasz?: ";
    cin>>rozmiar;
    
	int liczby[rozmiar];
        
    pobierzLiczby(liczby,rozmiar);
    sumuj(liczby, rozmiar);
        
    return 0;
}


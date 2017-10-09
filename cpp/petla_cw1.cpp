/*
 * petla_cw1.cxx
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	    //int i;
    int suma = 0;
    int liczba = 0;
    int ilosc = 0;
    cout<<"Wprowadzaj kolejne liczby: ";
    //for (;;)
    while (1) //pętla nieskończona
    {
        cin >> liczba;
        ilosc++;
        cout<< "Podano: "<<liczba<<endl;
        suma+=liczba;
        if (suma>75)
            break;
    };
    cout <<"Suma liczb: "<<suma <<endl;
    cout <<"Ilość liczb: "<<ilosc<<endl;
	return 0;
}



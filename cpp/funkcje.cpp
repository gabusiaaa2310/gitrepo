/*
 * funkcje.cpp
 */

#include <iostream>
using namespace std;

void sumuj(int a, int b) 
{
    cout <<"Suma: "<<a+b<<endl;
}

void odejmij(int a, int b) 
{
    cout <<"Różnica: "<<a-b<<endl;
}

void pomnoz(int a, int b) 
{
    cout <<"Iloczyn: "<<a*b<<endl;
}

void podziel(int a, int b) 
{
    //sprawdź b!
    if (b=0)
    cout<<"Nie dzieli się przez 0!!!"<<endl;
    else
        cout <<"Iloraz: "<<a/b<<endl;
}

int main(int argc, char **argv)
{
    int a,b;
    cout <<"Podaj liczby: ";
    cin>>a>>b;
    
    sumuj(a,b);
    odejmij(a,b);
    pomnoz(a,b);
    podziel(a,b);
    return 0;
}


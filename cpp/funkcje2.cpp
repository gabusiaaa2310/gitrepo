/*
 * funkcje.cpp
 */

#include <iostream>
using namespace std;

int sumuj(int a, int b) 
{
    return a+b;
}

int odejmij(int a, int b) 
{
    return a-b;
}

int pomnoz(int a, int b) 
{
    return a*b;
}

int podziel(int a, int b) 
{
    //sprzawdź b!
    return a/b;
}

int main(int argc, char **argv)
{
    int a,b;
    cout <<"Podaj liczby: ";
    cin>>a>>b;
    
    int suma= sumuj(a,b);
    int roznica= odejmij (a,b);
    int iloczyn= pomnoz (a,b);
    int iloraz=podziel (a,b);
    
    cout<<"Suma: "<<suma<<endl;
    cout<<"Różnica: "<<roznica<<endl;
    cout<<"Iloczyn: "<<iloczyn<<endl;
    cout<<"Iloraz: "<<iloraz<<endl;
    return 0;
}


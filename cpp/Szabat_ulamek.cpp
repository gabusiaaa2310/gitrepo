/*
 * Szabat_ulamek.cpp
 */


#include <iostream>

using namespace std;

int nwd(int a, int b)
{
    //int a, b;
    while (a != b) 
    {
        if (a>b)
            a = a - b;
        else
            b = b - a;
    }
  return a;
}

int main(int argc, char **argv)
{
    int a, b;

    cout << "Podaj licznik: ";
    cin >> a;

    cout << "Podaj mianownik: ";
    cin >> b;
    
    int li=a/nwd(a,b);
    int mi= b/nwd(a,b);

    cout << "Ułamek wynosi: " << li << ":" << mi << endl;
    
    
	return 0;
}


/*
 * hello.cpp
 */


#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv)
{

    int a, b, c;
    int obwod = 0;
    float p = 0;
    a = b = c = 0;
    cout << "Podaj boki: " <<endl;
    cin >> a >> b >> c;
    if (a+b >c && a + c > b && b + c > a ) { 
        obwod= a + b + c;
        cout << "Obwód wynosi : " << obwod << endl;
        p= 0.5 * obwod;
        cout << "Współczynnik: " << p << endl;
        cout << "Pole: " << sqrt (p*(p-a)*(p-b)*(p-c)) << endl;
    } else {
        cout << "Z tych boków nie powstanie trójkąt :( ";
        }
    
	return 0;
}


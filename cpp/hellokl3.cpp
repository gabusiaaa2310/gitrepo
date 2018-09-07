/*
 * hellokl3.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    char imie[10];
    char dzialanie;
    int a, b;
    cout <<"Witaj w C++!!!" << endl;
	cout <<"Podaj imię: ";
    cin >> imie;
    cout << "Cześć, " << imie << "!" << endl;
    cout << "Jakie działanie chcesz wykonać?" << endl;
    cin >> dzialanie;
    cout << "Liczba a:"; cin >> a;
    cout << "Liczba b:"; cin >> b;
    
    if (dzialanie == '+')
        cout << a + b << endl;
    else if (dzialanie == '-')
        cout << a - b << endl;
    else if (dzialanie == '*')
        cout << a * b << endl;
    else if (dzialanie == '/')
        cout << a / b << endl;
    
    return 0;
}


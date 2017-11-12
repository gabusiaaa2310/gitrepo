/*
 * petle_cw4_kl2ag1_Szabat.cpp
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int liczba=0;
	int wynik=0;
	cout<<"Podaj liczbe: "
	cin>>liczba;
	while
	{
		wynik+=liczba%10;
		liczba/=10;
	}
	cout<<"Suma cyfr podanej liczby wynosi: "<<wynik<<endl;
	return 0;
}


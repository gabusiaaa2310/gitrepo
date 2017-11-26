/*
 * euklides.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a,b;
	
	cout << "Podaj a: ";
	cin >> a;
	
	cout << "Podaj b: ";
	cin >> b;
	
	cout << "NWD(" << a << "," << b << ") = ";
	
	while (a != b)
	{
		if (a < b)
		b -= a;
	else
		a -= b;
	}
cout << a << endl;
	
	return 0;
}


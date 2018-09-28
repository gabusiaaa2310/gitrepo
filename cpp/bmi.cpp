/*
 * bmi.cpp
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    float waga;
    float wzrost;
    float bmi;
    cout << "Podaj swoją wagę[kg]: ";
    cin >> waga;
    cout << "Podaj swój wzrost[m]: ";
    cin >> wzrost;
    bmi = waga/ (wzrost * wzrost);  
    cout << "Twoje BMI wynosi " << bmi << endl;
    cout << "Masz ";
    
    if (bmi < 18.5)
        cout << "niedowagę" ;
    if (bmi >= 18.5 && bmi < 24.9)
        cout << "prawidłową wagę" ;
    if (bmi >= 25 && bmi < 30 )
        cout << "nadwagę" ;
    if (bmi >= 30)
        cout << "otyłość" ;
        
	return 0;
}


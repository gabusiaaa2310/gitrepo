/*
 * minmax.cpp 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int n, min, pom;
 
        cout<<"Ile liczb chcesz wczytać? ";
        cin>>n;
 
        cin>>min; //pierwszą liczbę przypisujemy do zmiennej min
 
        for(int i=1;i<n;i++) //wczytanie pozostałych n-1 liczb
        {
                cin>>pom;
                if(min>pom)
                //podmieniamy, gdy znajdziemy mniejszą niz min
                        min = pom; 
        }
 
        cout<<"Najmniejszą wczytaną liczbą jest "<<min<<endl;
 
        system("pause");
        return 0;
}


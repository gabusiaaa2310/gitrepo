/*
 * sort_wstaw.cpp 
 */

#include <iostream>

using namespace std;

void sort_wstaw(int n, int *tab)
{
	int tab, j;
	for(int i=1; i<n; i++)
	{
		pom = tab[i];
		j = i-1;
			
			while(j>=0 && tab[j]>pom) 
			{
				tab[j+1] = tab[j];
				--j;
			}
			tab[j+1] = pom;
	}    
}
 
int main(int argc, char **argv)
{
	int n, *tab;
	cout<<"Podaj wielkość zbioru: ";
	cin>>n;

	tab = new int [n];

	for(int i=0; i<n; i++)
	{
		cout<<"Podaj "<<i+1<<" element: ";
		cin>>tab[i];
	}

	cout<<"Elementy przed sortowaniem:\n";
	for(int i=0; i<n; i++)
		cout<<tab[i]<<" ";
 
    cout<<"\nElementy posortowaniem:\n";
    for(int i=0; i<n; i++)
            cout<<tab[i]<<" ";
 
    cin.ignore();
    cin.get();
    return 0;    
}
 

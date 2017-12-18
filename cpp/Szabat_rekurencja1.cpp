/*
 * Szabat_rekurencja1.cpp
 */


#include <iostream>

using namespace std;


int ciag(int a)
{
    if(a==0)
        return 0;
    else
        return ciag(a-1)+1+(a-1)*2;
}
int main(int argc, char **argv)
{
    int a;
    cout << "ktora wyraz ciagu ?: ";
    cin >> a;
    cout << ciag(a);
    system("PAUSE");
    return EXIT_SUCCESS;
}
	
	return 0;


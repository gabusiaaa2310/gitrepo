/*
 * petla_cw7.cxx
 */

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int m=0;
	for (int i=0; i<3; i++)
        {
            cout <<"Podaj numer miesiąca: ";
            cin>>m;
            if (m>0&& m<13) break;
            else cout<<"Błędne dane!"<<endl;
            cout<<i<<" "<<endl;
        }
        
        swich (m)
        {
            case 1;
                cout << "Styczeń";
            break; 
            case 2;
                cout << "Luty";
            break; 
            case 3;
                cout << "Marzec";
            break; 
            case 4;
                cout << "Kwiecień";
            break; 
            case 5;
                cout << "Maj";
            break; 
            case 6;
                cout << "Czerwiec";
            break;     
            case 7;
                cout << "Lipiec";
            break;             
            case 8;
                cout << "Sierpień";
            break;             
            case 9;
                cout << "Wrzesień";
            break;             
            case 10;
                cout << "Październik";
            break;             
            case 11;
                cout << "Listopad";
            break;             
            case 12;
                cout << "Grudzień";
            break;             
        }
        
        
	return 0;
}


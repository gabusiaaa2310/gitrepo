/*
 * współrzędne.cpp
 */


#include <iostream>

using namespace std;

struct punkt{
    int x;
    int y;
};
    
struct wektor{
    punkt pp;
    punkt pk;
};

punkt wylicz_srodek(wektor w) {
    punkt ps;
    ps.x =(float)(((w1.pp.x + w1.pk.x) / 2)
    ps.y =(float)(((w1.pp.y + w1.pk.y) / 2)
    return ps;
};

wektor getWektor() {
    wektor w1;
    cout << "Podaj współrzędne punktu początkowego:\n"
    cin >> w1.pp.x
    cin >> w1.pp.y
    cout << "Podaj współrzędne punktu końcowego:\n"
    cin >> w1.pk.x;
    cin >> w1.pk.y;
    
    return wektor;
}


int main(int argc, char **argv) {
    
    wektor w1 = getWektor();
    punkt ps = wylicz_srodek(w1)
    // wydrukuj współrzędne środka
	return 0;
}


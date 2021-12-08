//notatnik z wydarzeniami
#include <iostream>
#include "zdarzenie.h"
using namespace std;

int main(){
    cout << "Dostep do utworzonych klas"<< endl <<"--------------------------"<< endl;
    Zdarzenie z1;
    z1.pokaz();
    Zdarzenie z2("Spotkanie przy herbatce");
    z2.pokaz();
    Zdarzenie z3("Pora obiadowa",7,11,2021,14,17);
    z3.pokaz();
    Zdarzenie z4;
    z4.wczytaj();
    z4.pokaz();
    return 0;
}
/*
Do samodzielnej pracy:
Rozszerz/przerób powy¿szy kod o mo¿liwoœæ zapisu i odczytu zdarzeñ z plików tekstowych
*/

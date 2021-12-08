#include <iostream>
#include "pytanie.h"

using namespace std;

int main(){
    cout << "QUIZ" << endl;
    int n = 3;  // ile jest pytran
    Pytanie p[n]; //tworzymy obiekt tablicowy - ilosc pytan
    int suma=0;
    for(int i = 0; i<n;i++){
        p[i].nr_pytania=i+1;
        p[i].wczytaj();
        p[i].zadaj_pytanie();
        p[i].sprawdz_odp();
        suma+=p[i].punkt;
    }
    cout << endl<< "Udalo ci sie zdobyc "<<suma<<" z "<< n <<" punktow."<< endl;
    return 0;
}

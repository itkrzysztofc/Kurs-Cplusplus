#include <iostream>
#include <cmath>

using namespace std;

unsigned int wczytajBin(){
    cout << "Podaj liczbe binarna: ";
    int x;
    cin>>x;
    if(x>1111111111){
        cout << "Twoja liczba jest za dluga !!!";
        return 0;
    }
    return x;
}
void zamienBinNaDec(unsigned int binarna){
    int d;//dziesietna
    int dlugoscLiczby;
    unsigned int b = binarna;
    int licznik = 1;
    dlugoscLiczby = binarna;
    while(dlugoscLiczby>1){
        dlugoscLiczby = dlugoscLiczby/10;
        licznik++;
    }
    int suma = 0; // wartosc pocztkowa
    int liczba;
    for(int i=0 ; i<licznik;i++){
        liczba = binarna%10;
        binarna = binarna/10;
        suma += liczba*pow(2,i);
    }
    d = suma;
    cout << "Liczba ma dlugosc: "<< licznik<< endl;
    cout << b << "(B) = " << d << "(10)\n";
}

int main(){
    unsigned int b = wczytajBin();
    //cout << b;
    zamienBinNaDec(b);
    return 0;
}

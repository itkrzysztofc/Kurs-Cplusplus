#include <iostream>
#include "zdarzenie.h"
using namespace std;

void Zdarzenie::wczytaj(){
    cout<<"Podaj nazwe wydarzenia: ";cin>>nazwa_wydarzenia;
    cout<< "Podaj dzien: "; cin>>dzien;
    cout<< "Podaj miesiac: "; cin>>miesiac;
    cout<< "Podaj rok: "; cin>>rok;
    cout<< "Podaj godzine: "; cin>>godz;
    cout<< "Podaj minute: "; cin>>minuta;
}
void Zdarzenie::pokaz(){
    cout<<"Wydarzenie: "<<nazwa_wydarzenia<<": "<<dzien<<"-"<<miesiac<<"-"<<rok<<" "<<godz<<":"<<minuta<<endl;
}

Zdarzenie::Zdarzenie(string n,int d,int m,int r, int g, int minu){
    nazwa_wydarzenia = n;
    dzien = d;
    miesiac = m;
    rok = r;
    godz = g;
    minuta = minu;
}
Zdarzenie::~Zdarzenie(){
    //cout << "Obiekt zostal usuniety"<<endl;
}

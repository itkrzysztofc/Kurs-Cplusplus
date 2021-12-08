#include <iostream>
#include <cstdlib>
#include <fstream>
#include "pytanie.h"
using namespace std;

void Pytanie::wczytaj(){
    fstream plik;
    plik.open("pytania.txt",ios::in);
    if(plik.good()==false){
        cout << "Nie udalo sie otworzyc pliku :-(";//jezeli nie ma pliku z pytaniami
        exit(0); //koniec programu
    }
    int nr_linii = (nr_pytania-1)*6+1;
    int aktualny_nr_pytania = 1;
    string linia;
    while(getline(plik,linia)){
        if(aktualny_nr_pytania==nr_linii){tresc = linia;}
        if(aktualny_nr_pytania==nr_linii+1){a = linia;}
        if(aktualny_nr_pytania==nr_linii+2){b = linia;}
        if(aktualny_nr_pytania==nr_linii+3){c = linia;}
        if(aktualny_nr_pytania==nr_linii+4){d = linia;}
        if(aktualny_nr_pytania==nr_linii+5){odp_poprawna = linia;}
        aktualny_nr_pytania++;
    }
    plik.close();
}
void Pytanie::zadaj_pytanie(){
    cout<<endl<<tresc<<endl<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Podaj swoja odpowiedz: ";
    cin>>odp_usera;
    cout<<"-----------------------------------------------"<<endl;
}
void Pytanie::sprawdz_odp(){
    if(odp_usera==odp_poprawna){
        cout <<endl<< "Odpowiedz poprawna. Zdobywasz punkt."<< endl;
        punkt = 1;
    } else {
        cout<<endl<<"Twoja odp. nie jest prawidlowa. \nprzykro mi. Nie otyrzymujesz punktu."<<endl;
        punkt = 0;
    }
}

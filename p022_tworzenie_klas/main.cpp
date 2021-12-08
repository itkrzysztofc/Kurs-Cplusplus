#include <iostream>
//klasy sa wstepem do obiektowki
using namespace std;
//poniozej powinny byc deklarowane klasy
class Gra{ //nazwy klas powinny byc z duzej litery
    public: //privat: lub abstract:
    //tworzymy zmienne funkcjonujace w calej klasie
    string gatunek;
    string nazwa;
    int rokWydania;
    //tworzymy metody w klasie
    void dodajGre(){
        cout <<"Podaj gatunek gry: ";
        cin>>gatunek;
        cout <<"Podaj nazwe gry: ";
        cin>>nazwa;
        cout <<"Podaj rok utworzenia gry: ";
        cin>>rokWydania;
    }
    void pokazGre(){
        cout << "Dodano gre: "<< gatunek << " - "<< nazwa << " z " << rokWydania<<endl;
    }
};

int main(){
    cout << "KLASY w programowaniu" << endl<<endl;
    Gra gra1;
    gra1.dodajGre();
    cout << endl;
    cout <<gra1.gatunek<< endl;
    Gra gra2;
    //gra2.dodajGre();
    gra1.pokazGre();
    if(gra2.gatunek.length() > 0 ){
        gra2.pokazGre();
    } else {
        cout << "Gra nie istnieje";
    }
    return 0;
}
/*
w Java Script:
document.write("napis");
obiekt.metoda(argument1, argument2,...);
*/

#include <iostream>

using namespace std;

class Zdarzenie{
    private: //funkcjonuja tylko w klasie
        int dzien,miesiac,rok,godz,minuta;
        string nazwa_wydarzenia;
    public:
        //konstruujemy obiekt z wartosciami poczatkowymi
        Zdarzenie(string = "Brak",int=1,int=1,int=1971,int=0,int=0);//konstruktor
        ~Zdarzenie(); //destruktor
        void wczytaj();
        void pokaz();
};

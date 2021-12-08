#include <iostream>

using namespace std;

class Pytanie{
    public:
        //zmienna (atrybuty)
        string tresc; //tresc pytania
        string a,b,c,d; //przykladowe odp.
        int nr_pytania; //wybrane pytanie/numer wiersza w pliku 'pytania.txt'
        string odp_usera; //wybrana litera odpowiedzi
        string odp_poprawna; // odpowiedz odczytana z pliku txt
        int punkt; // 0 lub 1 - przyznane punkty za odpowiedzi
        //metody klasy
        void wczytaj(); //odczyt pliku
        void zadaj_pytanie(); //wypisuje na ekran pytania
        void sprawdz_odp();
};

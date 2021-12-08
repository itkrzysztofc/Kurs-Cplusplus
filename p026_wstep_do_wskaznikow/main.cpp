#include <iostream>

using namespace std;

int main(){
    cout << "WSKAZNIKI" << endl;
    //zmienna liczba
    int liczba = 8;
    cout << liczba << endl; //sprawdzamy czy zmienna ma wartosc
    //tworzymy wskaznik 'w'
    int *w; //deklaracja wskaznika
    int *x; //deklaracja wskaznika
    cout << w << endl << x << endl; //adresy wskazniokow
    cout << &w << endl << &x << endl; //adresy wskazniokow
    w = &liczba; //zmieniamy adres wskazywania wskaznika
    cout << &w << endl;
    cout << *w << endl;
    //przyklad uzycia wskaznikow
    int *wskaznik;
    int tab[] = {55, -8, 4, 2 ,1};
    wskaznik = tab;//wskaznik ma wskazywac na tablice
    cout<<*wskaznik<< endl; //piewrszy elemant tablicy
    *wskaznik++;//zmiana pozkazywania na kolejny element
    *wskaznik = *wskaznik+100;
    cout<<"Info: "<<*wskaznik<< endl;
    for (int i=0;i<5;i++){
        cout << tab[i] << " ";
    }
    cout<<endl;
    delete [] tab; //usuwa tablice z pamieci
    cout << tab[0];
    delete wskaznik; //usuniecie wskaznika
    cout << *wskaznik;
    return 0;
}

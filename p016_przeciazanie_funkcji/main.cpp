#include <iostream>
#include <ctime>
#include "funkcje_przeciazone.h"
//prototypy funkcji - informuja o mozliwosci uzycia danej funckci
void tab();
void tab(int n);
void tab(int n,int m);
void tab(int n,int m,string napis);

using namespace std;

int main(){
    int n,m;
    string napis;
    tab();
    cout << "Podaj dlugosc tablicy: ";
    cin >> n;
    cout << "Podaj szerokosc tablicy: ";
    cin >> m;
    cout << "Podaj swoje imie: ";
    cin >> napis;
    tab(n);
    tab(n,m);
    tab(n,m,napis);
    return 0;
}

#include <iostream>

using namespace std;
void zmien(int y){
    y = -5;
    cout << "Funkcja zmienila na: "<< y <<" "<< &y << endl;
}
int zmien2(int z){
    z = -5;
    cout << "Funkcja zmienila na: "<< z <<" "<< &z << endl;
}
int main(){
    int *w;
    int *k;
    cout << "Wskazniki cz.2" << endl;
    int x = 8;
    cout << "Zmienna przed: " << x;
    cout << " o adresie: " << &x << endl;
    w=&x;
    zmien(*w);
    cout <<"Po zmianie: "<< x << " " << &x << endl;
    ////////////////////
    int tab[] = {8};
    cout << "Zmienna przed: " << tab[0];
    cout << " o adresie: " << &tab << endl;
    *k=tab[0];
    zmien2(*k);
    cout <<"Po zmianie: "<< *k << " " << &k << endl;
    *k = *k + 5;
    cout << *k << " " << &k<< endl;
    cout << tab[0] << " " << &tab;
    return 0;
}

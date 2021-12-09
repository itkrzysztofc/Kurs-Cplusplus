//zadanie z matury rozszerzonej 2021 informatyka

#include <iostream>
using namespace std;
int licznik;
int n; //wprowadzona liczba
int s = 10;//system pozycyjny dziesietny
int dopelnienie;
//wyznaczenie długości liczby
int dlugosc_liczby(int n) {
    licznik = 0;
    while (n > 0) {
        n /= 10;
        licznik++;
    }
    return licznik;
}
//wczytanie liczby
int podaj_n() {
    cout << "Podaj liczbe n = ";
    cin >> n;
    return n;
}
//propgram glowny
int main(){
    podaj_n();
    dlugosc_liczby(n);
    cout << "Długoprowadzona liczba to: " << n << endl;
    for (int i = 1; i < dlugosc_liczby(n); i++) {
        s = s * 10;
    }
    s--;
    dopelnienie = s-n;
    cout << dopelnienie;
}
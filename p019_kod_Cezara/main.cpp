#include <iostream>

using namespace std;

int main(){
    //wprowadzamy dane
    cout << "Podaj imie i nazwisko: " << endl;
    string imie,name,napis,nowyNapis;
    cin >> imie;
    cin >> name;
    //laczymy napis
    int nowyZnak;
    int dl_imie = imie.length();
    int dl_name = name.length();
    int x;
    cout << "O ile znakow chcez przesunac kod? ";
    cin >> x;
    int n = dl_imie + 1 + dl_name;
    string tab[n];
    napis = imie + " " + name;
    //kodujemy
    for(int k=0;k<n;k++){
        nowyZnak = int(napis[k])+x;
        nowyNapis[k] = (char)nowyZnak;
        cout <<nowyNapis[k];
    }
    //dekodowanie
    cout << endl;
     for(int k=0;k<n;k++){
        nowyZnak = int(nowyNapis[k])-x;
        napis[k] = (char)nowyZnak;
        cout <<napis[k];
    }
    return 0;
}

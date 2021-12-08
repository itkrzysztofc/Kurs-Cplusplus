#include <iostream>
#include <windows.h>

using namespace std;

string imie;
int szerokoscRamki = 70;
char znak ='X';
int m=10;//wysokosc ramki
//funkcja wczytuj¹ca imie
string podajImie(){
    cout << "Podaj swoje imie: ";
    cin>> imie;
    system("cls");
    cout << "Witaj " <<imie << endl;
    return imie;
}
//linia poczatkowa i koncowa
void linia_PK(){
    for(int i=0;i<szerokoscRamki;i++){
        cout<<znak;
    }
    cout << endl;
}
//linia z bocznymi krawedziami
void linia_b(){
    cout << znak;
    for(int i=1;i<szerokoscRamki-1;i++){
        cout<<" ";
    }
    cout << znak <<endl;
}
//imie wklejone do ramki
void ramkaZimieniem(){
    cout << znak;
    int n = szerokoscRamki - imie.length();
    for(int i=1;i<n/2;i++){
        cout << " ";
    }
    cout << imie;
    if(imie.length()%2==0){
    } else {
        n++;
    }
        for(int i=1;i<n/2;i++){
            cout << " ";
        }
    cout << znak;
    cout<<endl;
}
//linia pionowa
void ramkaPionowa(){
    for(int i=0;i<((m/2)*2);i++){
        if(i==(m/2)){
            ramkaZimieniem();
        }
        linia_b();
    }
}

int main(){
    podajImie();
    linia_PK();
    ramkaPionowa();
    linia_PK();
    return 0;
}
/*
***********************
*                     *
*                     *
*        imie         *
*                     *
*                     *
***********************
*/

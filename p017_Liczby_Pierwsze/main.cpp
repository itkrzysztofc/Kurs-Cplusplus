#include <iostream>
int licznik;

using namespace std;
// sprawdza, czy liczba N jest liczba pierwsza.
void czyPierwsza(int N){
    licznik = 0;
    // czy liczba jest liczba pierwsza?
    for(int i=1;i<N;i++){
        if(N%i==0) {
            licznik++;
            if(licznik>1) break;
        }
    }
}
// wypisuje liczby pierwsze z zakresu do N
void liczbyPierwszeN(int N){
    for(int i = 1; i<=N;i++){
        czyPierwsza(i);
        if (licznik==1) cout <<  i << " ";
    }
}

int main(){
    int N;
    cout << "Podaj liczbe do sprawdzenia czy to jest liczba pierwsza: ";
    cin >> N;
    czyPierwsza(N);
    if (licznik==1) cout << "Liczba jest liczba pierwsza" << endl;
    else cout << "TO NIE JEST LICZBA PIERWSZA"<<endl;
    liczbyPierwszeN(N);
    return 0;
}

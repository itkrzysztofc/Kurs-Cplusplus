#include <iostream>
using namespace std;
//ponizej znajduja sie tylko funkcje
void tab(){
    cout << "PRZECIAZANIE FUNKCJI" << endl;
    cout << "Funkcja nie posiada atrybutow"<< endl;
}
void tab(int n){
    int tablica[n];
    srand(time(NULL));
    for(int i=0;i<n;i++){
        tablica[i] = rand()%101; //od zera do 100
        cout << tablica[i] << " ";
    }
    cout << endl;
}
void tab(int n, int m){
    int tablica[n][m];
    srand(time(NULL));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tablica[i][j] = rand()%101; //od zera do 100
            if(j==m-1){
                cout << tablica[i][j] << endl;
            } else {
                cout << tablica[i][j] << " ";
            }
        }
    }
    cout << endl;
}
void tab(int n, int m, string imie){
    cout << endl << "Witaj " << imie << endl;
    int tablica[n][m];
    srand(time(NULL));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tablica[i][j] = rand()%101; //od zera do 100
            if(j==m-1){
                cout << tablica[i][j] << endl;
            } else {
                cout << tablica[i][j] << " ";
            }
        }
    }
    cout << endl;
}

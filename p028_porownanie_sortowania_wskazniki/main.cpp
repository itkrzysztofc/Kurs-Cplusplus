#include <iostream>
#include <ctime>
#include <time.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
clock_t start;
clock_t stop;
double czas;
//2. funkcja bubblesort - sortowanie bombelkowe
void bubblesort (int *tab1, int n){
    for (int i=1;i<n;i++){
        for(int j=n-1;j>0;j--){
            if(tab1[j]<tab1[j-1]){
                int buff = tab1[j-1];
                tab1[j-1] = tab1[j];
                tab1[j] = buff;
            }
        }
    }
}
void quicksort(int *tab, int lewy,int prawy){
    int v = tab[(lewy+prawy)/2];
    int i,j,x; // x - bufor do sortowania
    i = lewy;
    j = prawy;
    do{
        while(tab[i]<v) i++;
        while(tab[j]>v) j--;
        if(i<=j){
            x=tab[i];
            tab[i]=tab[j];
            tab[j]=x;
            i++;
            j--;
        }
    } while(i<=j);
    if(j>lewy) quicksort(tab,lewy,j);
    if(i<prawy) quicksort(tab,prawy,i);
}
int main(){
    cout << "Podaj dlugosc tablicy:" << endl;
    int n;
    cin >> n;
    int *tab1; tab1 = new int[n];
    int *tab2; tab2 = new int[n];
    srand(time(NULL));
//1. generator tablicy nie posortowanej
    cout << "TABLICA przed sortowaniem: "<< endl;
    int i = 0;
    while(i<n){
        tab1[i] = rand()%100000;
        //cout << tab1[i] << " ";
        tab2[i]=tab1[i];
        i++;
    }

//sortowanie bombelkowe
    cout <<"\nSortowanie bombelkowe w trakcie\n"<<endl;
    start = clock();
    bubblesort(tab1,n);
    stop = clock();
    czas = (double)(stop-start)/CLOCKS_PER_SEC;
    cout << czas << endl;
    //////sprawdzenie czy tablica jest posortowana
    //for(int i = 0 ; i<n; i++){
        //cout << tab1[i] << " ";
    //}
    cout <<"\nSortowanie quicksort w trakcie: "<<endl;
    start = clock();
    quicksort(tab2,0,n-1);
    stop = clock();
    czas = (double)(stop-start)/CLOCKS_PER_SEC;
    cout << czas << endl;
    cout << endl;
    delete [] tab1;
    delete [] tab2;
    return 0;
}

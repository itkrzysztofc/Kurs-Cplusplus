#include <iostream>

using namespace std;

int main(){
    //przypomnienie
    {/*
    int n;
    cout << "Podaj dlugosc tablicy: " ;
    cin >> n;
    int tab1[n];
    for(int i = 0; i <n ; i++){
        tab1[i] = i;
        cout << tab1[i] << " " ;
    }
    */}
    //tablice wielowymiarowe
    int liczba_znakow = 9; //maksymalna dlugosc
    int ilosc_ciagow_znakow = 5;
    char tab2[ilosc_ciagow_znakow][liczba_znakow] = {
        {'p','a','m','i','e','c'},
        {'p','r','o','c','e','s','o','r'},
        {'r','a','m'},
        {'r','a','d','i','a','t','o','r'},
        {'z','a','s','i','l','a','c','z'}
    };
    tab2[2][0] = 'R';
    int tab3[] = {1,2,3,4,5};
    //wyswietlanie danych z trablic
    //cout << tab3[0] << endl;
    //cout << tab2[0] << endl;
    //cout << tab2[0][2] << endl;
    int dlugosc_tab3 = sizeof(tab3)/sizeof(tab3[0]);//wyznaczenie d³ugosci tablicy
    //cout << dlugosc_tab3 << endl;
    for (int i=0;i<dlugosc_tab3;i++ ){
        cout << tab3[i]<< " " << tab2[i]<<endl;
    }

    return 0;
}

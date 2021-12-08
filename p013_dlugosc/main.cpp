#include <iostream>

using namespace std;

int main(){
    string napis = "111111111111111111111111111111";
    int x = napis.length();
    cout <<"Dlugosc wprowadzonego napisu: "<< x << endl;
    int tablica[30];
    x = sizeof(tablica)/sizeof(1);
    cout <<"Dlugosc  tablicy: "<< x <<" "<<sizeof(3)<< endl;
    return 0;
}

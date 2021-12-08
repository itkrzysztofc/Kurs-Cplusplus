#include <iostream>

using namespace std;
unsigned int binarna;
int dlugoscLiczby;

int main(){
    cout << "Wprowadz liczbe binarna: " << endl;
    cin >> binarna;
    int licznik = 1;
    dlugoscLiczby = binarna;
    int resztaLiczby = binarna;
    int nowaLiczba = binarna;
    while(dlugoscLiczby>1){
        dlugoscLiczby = dlugoscLiczby/10;
        licznik++;
    }
    cout << licznik;//
    nowaLiczba = (nowaLiczba / 10000);
    resztaLiczby = resztaLiczby % 10000;
    cout <<endl <<  binarna <<":  "<< nowaLiczba <<" "<< resztaLiczby;
     return 0;
}

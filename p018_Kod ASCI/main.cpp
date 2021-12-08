#include <iostream>

using namespace std;

int main(){
    //===========================================
    cout << "Zamiana znaku na kod ASCI" << endl;
    //1. jeden znak
    char znak = 'A';
    cout << int(znak) << endl; //rzutowanie typow
    //2. napis w kodzie ASCI
    string napis = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int n = napis.length();
    for (int i=0;i<n;i++){
        cout << int(napis[i]) << " ";
    }
    cout << endl;
    //3. test napisu
    napis = "Krzysztof Czyz";
    n = napis.length();
    for (int i=0;i<n;i++){
        cout << int(napis[i]) << " ";
    }
    cout << endl;
    for (int i=0;i<n;i++){
        cout <<napis[i]<<" "<< int(napis[i]) << endl;
    }
    cout << endl;
    //===========================================
    cout << "Zamiana kodu ASCI na znak" << endl;
    for (int i=0;i<255;i++){
        cout <<char(i)<< "  ";
    }
    cout << endl;
    return 0;
}

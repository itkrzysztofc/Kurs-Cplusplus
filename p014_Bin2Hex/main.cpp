#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    cout << "Podaj liczbe binarna: " << endl;
    string binarna;
    cin >> binarna;
    system("cls");
    cout << "Wprowadzona   liczba   to:  " << binarna << endl;
    int dlugosc = binarna.length(); //dlugosc wprowadzonego stringa
    cout << dlugosc << endl;
    int roznica; //ilosc brakujacych zer z przodu
    roznica = 4-dlugosc%4;
    cout <<"Roznica: "<< roznica<< endl;
    if(roznica==1) {binarna = "0"+binarna;}
    else if(roznica==2) binarna = "00"+binarna;
    else if(roznica==3) binarna = "000"+binarna;
    else binarna = binarna;
    cout << "Uzupelniony string binarny: "<< binarna <<endl;
    dlugosc = binarna.length();
    cout<<"Nowa dlugosc = "<<dlugosc<<endl;
    int ile4 = dlugosc/4;
    cout <<"Ilosc czworek = "<< ile4<< endl;
    string tab[ile4];
    int j=0;
    for(int i=0; i<dlugosc;i++){
        string nowyString="";
        nowyString = nowyString+binarna[i]+binarna[i+1]+binarna[i+2]+binarna[i+3];
        cout<< nowyString << " ";
        if(nowyString=="0000"){
            nowyString = "0";
        } else if(nowyString=="0001"){
            nowyString = "1";
        } else if(nowyString=="0010"){
            nowyString = "2";
        } else if(nowyString=="0011"){
            nowyString = "3";
        } else if(nowyString=="0100"){
            nowyString = "4";
        } else if(nowyString=="0101"){
            nowyString = "5";
        } else if(nowyString=="0110"){
            nowyString = "6";
        } else if(nowyString=="0111"){
            nowyString = "7";
        }else if(nowyString=="1000"){
            nowyString = "8";
        }else if(nowyString=="1001"){
            nowyString = "9";
        }else if(nowyString=="1010"){
            nowyString = "a";
        }else if(nowyString=="1011"){
            nowyString = "b";
        }else if(nowyString=="1100"){
            nowyString = "c";
        }else if(nowyString=="1101"){
            nowyString = "d";
        }else if(nowyString=="1110"){
            nowyString = "e";
        } else {
            nowyString = "f";
        }
        tab[j] = nowyString;
        i+=3;
        j++;
    }
    cout << " BIN"<< endl;

    for (j=0;j<ile4;j++){
        cout << tab[j] << " ";
    }
    cout << " HEX";
    return 0;
}

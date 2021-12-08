#include <iostream>
#include <cmath>
#include <string>
#include <cstdio>

using namespace std;
int main(){
    string binarna;
    int licznik;
    int roznica;
    int j;
    cout << "Wprowadz liczbe binarna: ";
    cin>>binarna;
    cout<< binarna<< endl;
    licznik = binarna.length();//d³ugosc wprowadzonego stringa
    roznica=4-licznik%4;
    if(roznica==1){ binarna="0"+binarna;}
    if(roznica==2){ binarna="00"+binarna;}
    if(roznica==3){ binarna="000"+binarna;}
    int newLong=licznik+roznica;
    int newLongBin=newLong/4; //ilosc czworek
    //cout <<newLongBin;//d³ugosc nowej tablicy z czworkami -ilosc slow 4b
    j=0;
    string newBin[newLongBin];
    for(int i=0;i<newLong;i++){
        string newString="";
        newString=newString+binarna[i];
        newString=newString+binarna[i+1];
        newString=newString+binarna[i+2];
        newString=newString+binarna[i+3];
        i+=3;
        newBin[j]=newString;
        if(newBin[j]=="0000"){
                cout<<"bin: 0000, dec: 0, hex 0"<<endl;
        } else if(newBin[j]=="0001"){
                cout<<"bin: 0001, dec: 1, hex 1"<<endl;
        } else if(newBin[j]=="0010"){
                cout<<"bin: 0010, dec: 2, hex 2"<<endl;
        } else if(newBin[j]=="0011"){
                cout<<"bin: 0011, dec: 3, hex 3"<<endl;
        } else if(newBin[j]=="0100"){
                cout<<"bin: 0100, dec: 4, hex 4"<<endl;
        } else if(newBin[j]=="0101"){
                cout<<"bin: 0101, dec: 5, hex 5"<<endl;
        } else if(newBin[j]=="0110"){
                cout<<"bin: 0110, dec: 6, hex 6"<<endl;
        } else if(newBin[j]=="0111"){
                cout<<"bin: 0111, dec: 1, hex 7"<<endl;
        } else if(newBin[j]=="1000"){
                cout<<"bin: 1000, dec: 8, hex 8"<<endl;
        } else if(newBin[j]=="1001"){
                cout<<"bin: 1001, dec: 9, hex 9"<<endl;
        }if(newBin[j]=="1010"){
                cout<<"bin: 1010, dec: 10, hex a"<<endl;
        } else if(newBin[j]=="1011"){
                cout<<"bin: 1011, dec: 11, hex b"<<endl;
        } else if(newBin[j]=="1100"){
                cout<<"bin: 1100, dec: 12, hex c"<<endl;
        } else if(newBin[j]=="1101"){
                cout<<"bin: 1101, dec: 13, hex d"<<endl;
        } else if(newBin[j]=="1110"){
                cout<<"bin: 1110, dec: 13, hex e"<<endl;
        } else {
                cout<<"bin: 1111, dec: 15, hex f"<<endl;
        }
        j++;
    }
    for (j=0;j<newLongBin;j++){
        cout << newBin[j] <<" ";
    }
    return 0;
}

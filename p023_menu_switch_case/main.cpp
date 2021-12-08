#include <iostream>

using namespace std;

int main(){
    cout << "Menu:" << endl;
    cout<<"======================"<<endl;
    cout <<"1. Dodaj pojazd"<<endl;
    cout <<"2. Pokaz pojazdy"<<endl;
    cout <<"0. Zakoncz program"<<endl;
    cout<<"======================"<<endl;
    int m=1;
    //cin>>m;
    while(!m==0){
        cin>>m;
        switch(m){
            case 1:
                //tu ma byc funkcja dodawanoia pojazdu
                cout << "wybrano 1";
                break;
            case 2:
                //tu ma byc funkcja pokazywania pojazdu
                cout << "wybrano 2";
                break;
            default:
                break;
        }
    }
    return 0;
}

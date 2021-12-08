//break continue go-to
#include <iostream>

using namespace std;

int main(){
    cout << "Jak dziala BREAK oraz CONTINUE" << endl;
    for (int i=0; i<100; i++){
        if(i == 10){
            cout<<endl;
            i=20;
            continue;
        }
        if(i == 50){
            cout<<endl;
            i=20;
            cout << i;
            break;
        }
        cout << i << " ";
    }
    cout << endl;
    goto odejmowanie;
    //goto dodawanie;
    dodawanie:
        float a,b;
        cout << "Podaj dwie liczby aby dodac: ";
        cin >> a >> b;
        cout << a+b<<endl;
    goto mnozenie;
    odejmowanie:
        float c,d;
        cout << "Podaj dwie liczby aby odjac: ";
        cin >> c >> d;
        cout << c-d << endl;
    goto dodawanie; // zapetlenie programu
    mnozenie:
        float f,g;
        cout << "Podaj dwie liczby aby pomnozyc: ";
        cin >> f >> g;
        cout << f*g << endl;
    return 0;
}

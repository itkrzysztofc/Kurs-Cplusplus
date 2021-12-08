#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream fileToOpen;
    ofstream fileToWrite;
    string linia;
    cout << "Odczyt pliku TXT" << endl;
    fileToOpen.open("hasla.txt");
    fileToWrite.open("nowyPlik.txt");
    int i=1;
    int ileZnakow = 0;
    while(!fileToOpen.eof()){
        fileToOpen>>linia;
        ileZnakow = ileZnakow + linia.length();
        cout << i <<". "<<linia <<endl;
        fileToWrite << i <<". "<<linia <<endl;
        i++;
    }
    cout << "Mamy "<<i-1<<" wyrazow zlozonych z "<< ileZnakow << " znkow." ;
    fileToOpen.close();
    fileToWrite.close();
    return 0;
}

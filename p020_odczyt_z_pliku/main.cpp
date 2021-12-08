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
    while(!fileToOpen.eof()){
        fileToOpen>>linia;
        cout << i <<". "<<linia <<endl;
        fileToWrite << i <<". "<<linia <<endl;
        i++;
    }
    fileToOpen.close();
    fileToWrite.close();
    return 0;
}

#include <iostream>
#include <cstdlib> // random library
using namespace std;
int main(){
    // lempar dadu
    char inputUS;
    while(true){
        cout << "Ingin Lanjut? (y,n) : ";
        cin >> inputUS;
        if (inputUS == 'n'){
            break;
        } else if (inputUS == 'y') {
            cout << "Kamu mendapatkan :   " << 1+(rand() %8) << endl; // generates a random number between 1 and 8
            // angka 1+ untuk mencegah 0 muncul dalam pilihan random, dan %8 untuk batas atas 8
        } else {
            cout << " Masukan input yang benar!";
        }
        
    }


    cin.get();
    return 0;
}
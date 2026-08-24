#include <iostream>
#include <array>
using namespace std;

// wajib deklarasi  diluar main jika menggunakan fungsi
const int baris = 2;
const int kolom = 2;

void printOut(array <array <int, kolom>, baris> nilai);


int main(){
    // rumus
    // const kolom = 2;
    // const baris = 2;
    // array < array <int, kolom>, baris> nilai = {1,2,3,4}
    array < array <int, kolom>, baris> nilai = {1,2,3,4};
    printOut(nilai);

    cin.get();
    return 0;
}

void printOut(array <array <int, kolom>, baris> nilai){
    for (array <int, kolom> baris : nilai){
        for (int nilaiKolom : baris){
            cout << nilaiKolom << " ";
        }
        cout << endl;
    }
}
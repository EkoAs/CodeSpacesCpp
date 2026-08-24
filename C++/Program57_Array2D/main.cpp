#include <iostream>
#include <array>
#include <string>
using namespace std;

// deklarasi atau prototype
void data();
void hitung(string ptr[0][2], int baris, int kolom); // string pakai ptr[0][2] karena kolomnya 2

int main(){
    int jumlah;
    cout << "Masukan Jumlah Data: ";
    cin >> jumlah;
    for (int i = 0;  i < jumlah; i++){
        data();
    }
    return 0;
}
void data(){
    const int baris = 2;
    const int kolom = 2;
    string input[baris][kolom];
    // loop meminta data/value
    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cout << "Masukan data: ";
            cin >> input[i][j];
        }
    }

    // loop pembatas
    cout << endl;
    for (int c= 1; c < 32; c++){
        cout << "=";
    }
    for (int i = 0; i < 14; i++){
        cout << " ";
    }
    cout << "DATA";
    for (int i = 0; i < 13; i++){
        cout << " ";
    }
    for (int c= 1; c < 32; c++){
        cout << "=";
    }
    cout << "[ ";
    hitung(input, baris, kolom);
}

// menampilkan ouput/cetak hasil
void hitung(string ptr[0][2], int b, int k){
    // int indeks = 0;
    for (int i = 0; i < b; i++){
        for (int x = 0; x < k; x++){
            cout << ptr[i][x] << " ";
            // indeks++;
        }
        // cout << endl;
    }
    cout << " ]" << endl << endl;
}
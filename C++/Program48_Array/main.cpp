#include <iostream>
#include <array>
using namespace std;


int main(){
    // membuat array
    //ada 2 cara. // mengurutkan
    int nilai[5]; //array
    nilai[0] = 0;// ccara menginisialisasinya
    nilai[1] = 1;
    nilai[2] = 2;
    nilai[3] = 3;
    nilai[4] = 4;
    // atau
    // int nilai[5] = {0, 1, 2, 3, 4};

    // cout << nilai<<endl; //ini akan menampilkan alamat awal array
    // satu persatu
    cout << &nilai[0]<< " Nilai : "<< nilai[0] << endl; // 0
    cout << &nilai[1]<< " Nilai : "<< nilai[1] << endl; // 4
    cout << &nilai[2]<< " Nilai : "<< nilai[2] << endl; // 8
    cout << &nilai[3]<< " Nilai : "<< nilai[3] << endl; // c = 12
    cout << &nilai[4]<< " Nilai : "<< nilai[4] << endl << endl; //balik lagi ke 0
    // punya 5 data yang address berurutan. dan nilainya ditaruuh di satubuah set disebut array


    //pointer yyg akan mengambil addessnya //akses
    int *ptr = nilai;
    *(ptr + 2) = 6;

    //atau merubah nilai
    nilai[3] = 12;

    cout << &nilai[0]<< " Nilai : "<< nilai[0] << endl; // 0
    cout << &nilai[1]<< " Nilai : "<< nilai[1] << endl; // 4
    cout << &nilai[2]<< " Nilai : "<< nilai[2] << endl; // 8
    cout << &nilai[3]<< " Nilai : "<< nilai[3] << endl; // c = 12
    cout << &nilai[4]<< " Nilai : "<< nilai[4] << endl << endl; //balik lagi ke 0

    // datanya tidak punya fungsi. mengambil jumlah array 

    // ngambil ukuran array
    cout << "Ukuran array: " << sizeof(nilai) << " Byte"<< endl;
    cout << "Jumlah elemen array: " << sizeof(nilai)/sizeof(int) << endl;

    cin.get();
    return 0;
}
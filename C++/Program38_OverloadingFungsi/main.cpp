#include <iostream>
using namespace std;
// overload = menimpa

// fungsi biasa
int hitung_luas(int panjang, int lebar){
    int hasil = panjang * lebar;
    return hasil;
}

// fungsi overloading
int hitung_luas(int sisi){ // mengambil salah satu nilai saja
    int lebar = sisi * sisi;
    return lebar;
}

// contoh double
double hitung_luas(double sisi){
    return sisi * sisi;
}

int main(){
    cout << "luas persegi 2x3 : " << hitung_luas(2,3) << endl;
    cout << "luas persegi 2x3 : " << hitung_luas(2) << endl; // tanpa default fungsi
    cout << "luas persegi 2x3 : " << hitung_luas(2.5) << endl; // bilangan double
    

    cin.get();
    return 0;
}
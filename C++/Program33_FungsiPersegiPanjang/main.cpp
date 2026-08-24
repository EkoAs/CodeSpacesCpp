#include <iostream>
using namespace std;

double hitung_luas(double p, double l){
    double luas = p * l;
    return luas;
}
double hitung_keliling(double p, double l){
    double keliling =  2*(p + l);
    return keliling;
}
void tampilkan_luas(double p, double l){ //  berfungsi hanya menampilkan
    cout << "Luas Persegi Panjang: " << hitung_luas(p, l) << endl;
}
void tampilkan_keliling(double p, double l){
    cout << "Keliling Persegi Panjang: " << hitung_keliling(p, l) << endl;
}
int main(){
    double panjang,lebar;
    while(true){
        cout << "Masukan panjang : ";
        cin >> panjang;
        cout << "Masukan lebar : ";
        cin >> lebar;

        tampilkan_luas(panjang, lebar);
        tampilkan_keliling(panjang, lebar);
        char opsi;
        cout << "Ingin lanjut? (y/n): ";
        cin >> opsi;
        if (opsi != 'y' && opsi != 'Y') {
            break;
        }
    }
    cout << endl << "perogram telah berakhir!" << endl;
    cin.get();
    return 0;
}
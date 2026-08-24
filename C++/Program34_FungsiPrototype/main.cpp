#include <iostream>
using namespace std;

// Prototype atau deklarasi. tanpa eksekusi
double hitung_luas(double p, double l);
void cetak(int hasil);

int main(){
    int panjang, lebar, hasil;
    // fungsi prototype kayak deklarasi
    // int x dulu baru nilai nya
    // x = 10
    cout << "Masukan Panjang: ";
    cin >> panjang;
    cout << "Masukan Lebar: ";
    cin >> lebar;
    hasil = hitung_luas(panjang, lebar);
    cetak(hasil);
    
    cin.get();
    return 0;
}
// dibawah int main() . dengan eksekusi 
double hitung_luas(double p, double l){
    return p * l; }
void cetak(int hasil){ // bisa juga untuk void
    cout << "Hasilnya adalah : " << hasil << endl; }
// nama fungsi dan argumen harus sama dengan yg sebelum input

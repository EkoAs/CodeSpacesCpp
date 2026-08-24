#include <iostream>
using namespace std;
int tambah(int a, int b){
    int c = a + b;
    return c; // reporter
}
void tampilan(int input){
    cout << "Hasil dari void : ";
    cout << input << endl; // worker
}
int main(){

    int a,b,hasil;
    cout << "masukan input : ";
    cin >> a;
    cout << "masukan input : ";
    cin >> b;
    hasil = tambah(a,b);
    tampilan(hasil); // memasukan nilai  ke dalam fungsi void untuk di tampilkan
}
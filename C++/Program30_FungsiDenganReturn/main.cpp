#include <iostream>
using namespace std;

int tambah(int a,int b){
    int c = a + b;
    return c;
}
int kali(int a, int b){
    int c = a * b;
    return c;
}

int main(){

    int a, b, hasil;
    cout << "Masukan input ke 1 : ";
    cin >> a;
    cout << "Masukan input ke 2 : ";
    cin >> b;
    hasil = tambah(a, b);
    cout << "Hasil: " << hasil << endl;
    cout << "Hasil Kali : " << kali(a, b) << endl;

    cin.get();
    return 0;
}
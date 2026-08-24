// operator aritmatika
// +, -, *, /, %
#include <iostream>
using namespace std;
    int main(){
        int a = 7;
        int b = 2;
        int hasil;
        // penjumlahan
        hasil = a + b;
        cout << " Hasil " << a << " + " << b << " = " << hasil << endl;
        // pengurangan
        hasil = a - b;
        cout << " Hasil " << a << " - " << b << " = " << hasil << endl;
        // perkalian
        hasil = a * b;
        cout << " Hasil " << a << " * " << b << " = " << hasil << endl;
        // pembagian
        hasil = a / b;
        cout << " Hasil " << a << " / " << b << " = " << hasil << endl;
        // modulus
        hasil = a % b;
        cout << " Hasil " << a << " % " << b << " = " << hasil << endl;

        // dengan input
        cout << "Masukan nilai" << endl;
        int c;
        cin >> c;
        hasil = c + a;
        cout << " Hasil " << c << " + " << a << " = " << hasil << endl;
        cin.get();
        return 0;
    }
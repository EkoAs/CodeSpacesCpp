#include <iostream>
using namespace std;

int main(){
    int num, num2, hasil;
    cout << "Masukan angka pertama: ";
    cin >> num;
    cout << "Masukan angka kedua: ";
    cin >> num2;
    if ((num > 0) && (num2 > 0)){
        hasil = num + num2;
        cout << "Hasil penjumlahan: " << hasil << endl;
    }else if((num < 0) && (num2 < 0)){
        hasil = num * num2;
        cout << "Hasil perkalian: " << hasil << endl;
    }else{
        int &a = num;
        int &b = num2;
        cout << a << " dan " << b << endl;
    }

    cin.get();
    return 0;
}
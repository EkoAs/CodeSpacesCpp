#include <iostream>
#include <string>
using namespace std;

int main(){
    // ternary operator adalah tanda tanya
    // cek konisi kita benar atau tidak, hasil 1 atau 2
    // kondisi ? hasil1 : hasil2
    // klo tru ambil hasil 1 kalo false ambil hasil 2

    int a,b;
    string hasil1,hasil2,output;
    hasil1 = "otong";
    hasil2 = "ucup";
    a = 5;
  

    cout << "masukan angka: ";
    cin >> b;

    output = (a < b) ? hasil1 : hasil2;
    // kalo true dan false, hasilnya masuk ke output
    
    
    // ekivalen ini ternary simplikasi dari atasnya
    // if (a<b){
    //     output = hasil1;
    // }else{
    //     output = hasil2;
    // }

    // if ini adalah peringkasan dari yg ternary operator, akan lebih mudah pakai yg
    // ternary op
    cout << "hasilnya " << output << endl;


    cin.get();
    return 0;
}
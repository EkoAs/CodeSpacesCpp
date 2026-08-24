#include <iostream>
#include <string>
using namespace std;

int main(){

// method untuk subtitusi
    string kalimat_1("aku suka kamu suka, siapa? dia!");
    string kalimat_2("wakanda forevah!!!");

    cout << "1: " << kalimat_1<< endl;
    cout << "2: " << kalimat_2<< endl << endl;
    
    // swap string, menukar dua buah kalimat ini
    cout <<"Swap string "<< endl;
    kalimat_1.swap(kalimat_2);
    
    cout << "1: " << kalimat_1<< endl;
    cout << "2: " << kalimat_2<< endl << endl;
    
    // replace, mengganti string
    // akan ganti dia di kalimat_1, karena dudah di swap jadi kalimat 2
    // replace(indeks, panjang indeks, kata pengganti)
    cout <<"replace string "<< endl;
    kalimat_2.replace(27,3,"otong");
    cout << "1: " << kalimat_2<< endl;
    
    // contoh llain
    int posisi = kalimat_1.find("ah");
    kalimat_1.replace(posisi,2,"er");
    cout << "2: " << kalimat_1<< endl;
    // atau yg lebih mudak
    // kalimat_1.replace(kalimat_1.find("ah"),2,"er");

    // insert string, masukan string
    // menambah kalimat diantara wakanda dan porever
    kalimat_1.insert(8,"dan hatiku ");
    cout << "insert string" << endl;
    cout << "1: " << kalimat_1<< endl;
   
    
    // asal muasal program microsoft word

    cin.get();
    return 0;
}
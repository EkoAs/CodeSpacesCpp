#include <iostream>
#include <string>
using namespace std;

int main(){
    // memasukan input
    string kata("Hello");
    cout << kata << endl;

    //mengambil karakter berdasarkan indeks
    cout<< "indeks ke 0: " << kata[0] << endl;
    cout<< "indeks ke 1: " << kata[1] << endl;
    cout<< "indeks ke 2: " << kata[2] << endl;
    cout<< "indeks ke 8: " << kata[8] << endl; // kalo diluar indeks akan menampilkan kosong

    //merubah karakter pada indeks
    kata[1] = 'a'; // pakai kutip satu 
    cout << kata << endl;

    // menyambung kalimat (concatenation)
    string kata2(kata + "Dunia");
    cout << kata2 << endl;

    // cara lainnya
    string kata3("World");
    // kata2.append(kata3); // menambahkan di belakang. atau
    // pakai spasi bisa juga
    kata2.append(" "+kata3);
    cout << kata2 << endl;

    // cara lainnya juga
    string kata4("AHOooYYY!!!!");
    // kata2 += kata4; 
    // pakai spasi bisa juga
    kata2 += " " + kata4;
    cout <<kata2<<endl;
    cin.get();
    return 0;

}
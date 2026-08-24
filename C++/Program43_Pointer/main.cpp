#include <iostream>
using namespace std;



int main(){
    int a = 5; // a mempunyau nilai dan address
    // naruh alamat dari si a pakai pointer
    // int *aPtr = &a;
    // pakai bintang, lalu namanya terserah. tapi jangan a lagi
    // pointer selalu ber tipe int 

    // nol pointer
    // mendeklarasikan pointer, tapi addresnya kosong
    int *aPtr = nullptr;
    aPtr = &a; // baru diisi addressnya

    cout << "ini adalah nilai dari a : " << a << endl;
    cout << "ini adalah address dari a : " << &a << endl;
    cout << "ini adalah pointer dari a : " << aPtr << endl;

    // ambil alamat tapi ambil nilainya juga
    //dereferencing , mengambil data dari sebuah pointer
    a = 10;
    cout << "mengambil nilai dari pointer aPtr : " << *aPtr << endl; // on of si nilainya

    cin.get();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;


struct aktor{
    string nama;
    int tahun_lahir;
};

struct film{
    string judul;
    string gendre;
    int tahun;

    aktor pemeran_1;
    aktor pemeran_2;
};

int main(){
    aktor  aktor1,aktor2;

    aktor1.nama = "Leonardo Di Caprio";
    aktor1.tahun_lahir = 1974;

    aktor2.nama="SANDRA bulog";
    aktor2.tahun_lahir= 1980;

    film film1,film2;
    film1.judul = "pengapbi wakanada";
    film1.gendre = "documenter";
    film1.tahun = 2020;
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;


    cout << film1.judul << endl;
    cout << film1.pemeran_1.nama << endl;


    film2.judul = "dilan gaming";
    film2.gendre = "action";
    film2.tahun = 2040;
    film2.pemeran_1 = aktor1;
   

    cout << film2.judul << endl;
    cout << film2.pemeran_1.nama << endl;



    cin.get();
    return 0;
}


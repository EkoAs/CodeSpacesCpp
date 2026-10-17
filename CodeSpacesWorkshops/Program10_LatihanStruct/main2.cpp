#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

// Struct mobil harus didefinisikan SEBELUM dipakai
struct mobil{
    string merk;
    string model;
    string warna;
    int mesin;
    float torsi;
};

// Fungsi untuk input dan validasi mesin
void inputMesin(mobil &m){
    string mesin="";
    cout<<"Masukan HP mesin (contoh: 200): ";
    cin>>mesin;

    if (all_of(mesin.begin(), mesin.end(), ::isdigit)) {
        cout << "Input adalah Integer." << endl;
        m.mesin=stoi(mesin);
    }else{
        cout<<"Input salah, harus integer: ";
        cin>>mesin;
        if (all_of(mesin.begin(), mesin.end(), ::isdigit)) {
            cout << "Input adalah Integer." << endl;
            m.mesin=stoi(mesin);
        }else{
            cout<<"Input salah, masukin yang benar!"<<endl;
            m.mesin=0; // Set default value
            return;
        }
    }
}

int main(){
    mobil mobilSaya;
    
    // Panggil fungsi input
    inputMesin(mobilSaya);
    
    // Tampilkan hasil
    cout << "\nMesin mobil: " << mobilSaya.mesin << " HP" << endl;

    cout << "\nTekan Enter untuk keluar...";
    cin.ignore();
    cin.get();
    return 0;
}
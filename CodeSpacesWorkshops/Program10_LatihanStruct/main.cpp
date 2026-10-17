#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct mobil{
    string merk;
    string model;
    string warna;
    int mesin;
    float torsi;
};

// Fungsi untuk mengecek apakah input adalah integer valid
int inputInteger(const string& prompt) {
    int nilai;
    while (true) {
        cout << prompt;
        cin >> nilai;
        
        if (cin.fail()) {
            cout << "❌ Error: Input bukan integer! Coba lagi.\n";
            cin.clear(); // Reset error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Buang input salah
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Buang newline
            return nilai;
        }
    }
}

// Fungsi untuk mengecek apakah input adalah float valid
float inputFloat(const string& prompt) {
    float nilai;
    while (true) {
        cout << prompt;
        cin >> nilai;
        
        if (cin.fail()) {
            cout << "❌ Error: Input bukan angka! Coba lagi.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return nilai;
        }
    }
}

// Fungsi untuk isi data mobil - PAKAI REFERENCE (&) biar bisa edit langsung
void isidata(mobil &m) {
    cout << "\n=== ISI DATA MOBIL ===\n";
    
    cout << "Merk: ";
    getline(cin, m.merk);
    
    cout << "Model: ";
    getline(cin, m.model);
    
    cout << "Warna: ";
    getline(cin, m.warna);
    
    // Gunakan fungsi validasi untuk int
    m.mesin = inputInteger("Kapasitas Mesin (cc): ");
    
    // Gunakan fungsi validasi untuk float
    m.torsi = inputFloat("Torsi (Nm): ");
}

// Fungsi untuk tampilkan data mobil
void tampildata(const mobil &m) {
    cout << "\n=== DATA MOBIL ===\n";
    cout << "Merk   : " << m.merk << endl;
    cout << "Model  : " << m.model << endl;
    cout << "Warna  : " << m.warna << endl;
    cout << "Mesin  : " << m.mesin << " cc" << endl;
    cout << "Torsi  : " << m.torsi << " Nm" << endl;
}

int main() {
    mobil mobilSaya;
    
    // Isi data dengan validasi
    isidata(mobilSaya);
    
    // Tampilkan data
    tampildata(mobilSaya);
    
    cout << "\nTekan Enter untuk keluar...";
    cin.get();
    return 0;
}
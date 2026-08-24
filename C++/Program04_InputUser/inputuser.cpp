#include <iostream>
using namespace std;

int main() {
    int data;
    cout << "Masukkan nilai: " << endl;
    cin >> data; // Membaca input dari pengguna
    cout << "Nilai yang dimasukkan adalah: " << data << endl; // Menampilkan nilai
    cout << "Program selesai." << endl; // Menambahkan output tambahan

    int hasil = data + 56;
    cout << hasil << endl;
    std::cin.get();
    return 0;
}

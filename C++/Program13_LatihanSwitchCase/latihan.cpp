#include <iostream>
#include <string> // Tambahkan ini untuk menggunakan string
using namespace std;

int main() {
    int x, y;
    char op; // Ganti string dengan char untuk switch case
    cout << "Masukkan angka pertama: ";
    cin >> x;
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;
    cout << "Masukkan angka kedua: ";
    cin >> y;

    switch(op) {
        case '+':
            cout << "Hasil: " << x + y << endl;
            break;
        case '-':
            cout << "Hasil: " << x - y << endl;
            break;
        case '*':
            cout << "Hasil: " << x * y << endl;
            break;
        case '/':
            if(y != 0) {
                cout << "Hasil: " << x / y << endl;
            } else {
                cout << "Error: Pembagian dengan nol!" << endl;
            }
            break;
        default:
            cout << "Operator tidak valid!" << endl;
    }

    cin.get(); // Menahan terminal agar tidak langsung tertutup (opsional)
    return 0;
}

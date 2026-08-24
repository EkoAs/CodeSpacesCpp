#include <iostream>
#include <vector>
#include <string>
using namespace std;

void data();
void hitung(const vector<vector<string>>& input);

int main() {
    int jumlah;
    cout << "Masukan Jumlah Data: ";
    cin >> jumlah;
    for (int i = 0; i < jumlah; i++) {
        data();
    }
    return 0;
}

void data() {
    int baris = 2;
    int kolom = 2;
    vector<vector<string>> input(baris, vector<string>(kolom));

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Masukan data: ";
            cin >> input[i][j];
        }
    }
    hitung(input);
}

void hitung(const vector<vector<string>>& input) {
    for (const auto& row : input) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

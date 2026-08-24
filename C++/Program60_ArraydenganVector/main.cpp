#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;


int main(){
    // tempalate
    // vector<int> nama;
    // vector <vector<string>> nama;
    // vector<vector<string>> nama(baris, vector<string>(kolom))
    const int kolom = 2;
    const int baris = 2;
    // deklarasi
    vector<vector<int>> dataNilai(baris,vector<int>(kolom));

    for (int i = 0; i < 2; i++){
        for (int j=0; j < 2; j++){
            cout << "Masukan data: ";
            cin >> dataNilai[i][j];
            cout << endl;
        }
    }
    
    for (int i = 0; i < 2; i++){
        for (int j=0; j < 2; j++){
            cout << dataNilai[i][j] << " ";
            
        }
        cout << endl;
    }

    cin.get();
    return 0;
}
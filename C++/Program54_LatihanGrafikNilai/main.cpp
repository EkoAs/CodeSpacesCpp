#include <iostream>
#include <array>
#include <string>
using namespace std;

void nilai(array<int,6>& nilai_mtk);

int main(){
    array<int,6> nilai_mtk;
    nilai(nilai_mtk);
    cin.get();
    return 0;
}
void nilai(array<int,6>& nilai_mtk){
    int hasil = 0;
    for (size_t i = 0; i < nilai_mtk.size(); i++){ // size_t  adalah tipe data yang digunakan untuk menyimpan ukuran array
        cout << "nilai semester " << (i+1) << " : ";
        cin >> nilai_mtk[i];
    }
    cout << endl;
    for (size_t i = 0; i < nilai_mtk.size(); i++){
        cout << (i+1) << " : " << nilai_mtk[i] << " ";
        for (int y = 0; y < nilai_mtk[i]; y++){
            cout << "=";
        }
        cout << endl;
    }
    for (size_t v = 0; v <=6; v++){
        for (size_t v = 0; v < nilai_mtk.size(); v++) {
            hasil = (nilai_mtk[v] + (nilai_mtk[v] - 1))/6 ;
        }
        // hasil /= nilai_mtk.size();
    }
    cout <<"Nilai Rata-Rata = " << hasil << endl;
}
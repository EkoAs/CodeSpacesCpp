#include <iostream>
#include <string>
using namespace std;

// deklarasi yg bagian bawahnya/ hitung
void hitung(int a, string jenis);

void menu(){
    for(int i = 0; i <= 20; ++i){
        cout << '=';
    }
    cout << endl;
    int a;
    string jenis;
    cout << "Masukan jenis kendaraan: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, jenis);
    cout << endl;
    cout << "Masukan Lama parkir: ";
    cin >> a;
    hitung(a,jenis);


}

void hitung(int a, string jenis){
    int hasil= 0;
    if(a > 5){
        for(int i= 0; i < a; i++){
            hasil += 1;
        }
        hasil = hasil - 5;
    }else{
        hasil = a;
    }
    cout << "Denda anda adalah: "<< a <<" : "<<hasil << endl;
    cout << " jenis adalah: "<< jenis << endl;
}
int main(){
    menu();

    cin.get();
    return 0;
}
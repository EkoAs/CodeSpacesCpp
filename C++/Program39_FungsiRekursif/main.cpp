#include <iostream>
using namespace std;
// funggsi rekursif terbatas
int pangkat( int a, int b){
    int hasil = a;
    for(int i = 1; i<b; i++){
        hasil = hasil  * a;
    }
    return hasil;
}

// merubah loop diatas jadi rekursif
int pangkat_rekursif(int a, int b){
    if (b <= 1 ){
        cout<< "akhir dari sekursif" << endl;
        return a;
    }else{
        cout << "rekursif" << endl;
        return a * pangkat_rekursif(a,(b-1));
    }
}
int main(){
    int a, b;
    cout << "Masukan bilangan: ";
    cin >> a;
    cout << "Masukan pangkat: ";
    cin >> b;
    cout << "Hasil: " << pangkat(a, b) << endl;
    cout << "Hasil: " << pangkat_rekursif(a, b) << endl;

    cin.get();
    return 0;
}
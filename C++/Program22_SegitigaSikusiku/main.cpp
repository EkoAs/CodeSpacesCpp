#include <iostream>
using namespace std;
int main(){
    
    int n;
    cout << "Masukan  panjang pola : ";
    cin >> n;
    cout <<"pola 1 \n" << endl;
    for (int i = 1; i < n; i++){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl; // meng enter setiap baris
    }
    
    cout <<"pola 2 \n" << endl;
    for (int i = 1; i < n; i++){
        for (int j = n; j >= i; j--){
            cout << "*";
        }
        cout << endl; // meng enter setiap baris
    }

    
    cin.get();
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Masukan Input Angka : ";
    cin >> x;
    for (int i = 1; i < x; i+=2){
        for (int k = 1; k < x; k++){
            cout << "+";
        }

        for (int y = 0; y <= i; y++){
            cout << "=";

        }
        cout << endl;
    }

    cin.get();
    return 0;
}
#include <iostream>
using namespace std;
// prototype fungsi
int faktorial(int n);
int input();
void output(int n);

int main(){
    while(true){
        int n = input();
        output(n);
        cout << "\nApakah Anda ingin melanjutkan? (y/n): ";
        char choice;
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            break;
        } 
    }
    cin.get();
    return 0;
}

int faktorial(int n){
    if (n <= 1){
        cout << n; 
        return n; // menjadi terbatas. tidak loop terus
    } else {
        cout << n << " X ";
        return n * faktorial(n - 1);
    }
}
int input(){
    int n;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> n;
    return n;
}
void output(int n){
    int hasil = faktorial(n);
    if (n < 3000){
        long n = n;
        cout << "Faktorial dari " << n << " adalah " << hasil << endl;
    }
    // cout << "  Faktorial dari " << n << " adalah " << hasil << endl;
}
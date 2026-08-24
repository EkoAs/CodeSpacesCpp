#include <iostream>
using namespace std;

int tambah(int a,int b){
    int c = a + b;
    return c;
}
int kurang(int a,int b){
    int c = a - b;
    return c;
}
int kali(int a,int b){
    int c = a * b;
    return c;
}
float bagi(float a, float b){
    float c = a / b;
    return c;
}
int main(){
    int a, b;
    char op;
    int m = 30;
    for (int i = 1; i < m; i++){
        cout << '=';
    }
    cout << endl;
    cout << "Masukan Input satu : ";
    cin >> a;
    cout << "Masukan Input kedua : ";
    cin >> b;
    cout << "Masukan Operator (+, -, *, /): ";
    cin >> op;
    for (int i = 1; i < m; i++){
        cout << '=';
    }
    cout << endl;
    switch(op){
        
        case '+':
            cout << "Hasil: " << tambah(a,b) << endl;
            break;
        case '-':
            cout << "Hasil: " << kurang(a,b) << endl;
            break;
        case '*':
            cout << "Hasil: " << kali(a,b) << endl;
            break;
        case '/':

            cout << "Hasil: " << bagi(a,b) << endl;
            break;
        default:
            cout << "Operator tidak valid" << endl;
            return false;
    }
    for (int i = 1; i < m; i++){
        cout << '=';
    }

}
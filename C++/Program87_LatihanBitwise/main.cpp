#include <iostream>
#include <string>
using namespace std;

void view(int num1, int num2, int num3, string val);
void println(int val);
void println(string val);

void user_input() {
    for (int i = 0; i <= 20; ++i) {
        cout << '=';
    }
    cout << endl;
    int angka1;
    int angka2;
    int angka3;
    string numbero;

    cin.ignore();
    cout << "Masukan Angka awal : ";
    cin >> angka1;
    cout << "\nMasukan Operator (<,>,~,&,|,<=,>=) : ";
    cin >> numbero;
    cout << "\nMasukan Angka kedua : ";
    cin >> angka2;

    angka3 = 0;
    view(angka1, angka2, angka3, numbero);
}

void view(int num1, int num2, int num3, string val) {
    if (val == "<") {
        println(num1);
        println(val);
        println(num2);
        num3 = (num1 < num2);
        println(num3);
        if(num3 == true){
            cout << "Hasil True!" << endl;
        }else{
            cout << "Hasil False!" << endl;
        }
    } else if (val == ">") {
        println(num1);
        println(val);
        println(num2);
        num3 = (num1 > num2);
        println(num3);
        if(num3 == true){
            cout << "Hasil True!" << endl;
        }else{
            cout << "Hasil False!" << endl;
        }
    } else if (val == "~") {
        println(num1);
        println(val);
        num3 = ~num1; // Memperbaiki penggunaan operator ~
        println(num3);
        num3 = ~num2;
        println(num3);
    } else if (val == "^") {
        println(num1);
        println(val);
        println(num2);
        num3 = (num1 ^ num2);
        println(num3);
        if(num3 == true){
            cout << "Hasil True!" << endl;
        }else{
            cout << "Hasil False!" << endl;
        }
    } else if (val == "&") {
        println(num1);
        println(val);
        println(num2);
        num3 = (num1 & num2);
        println(num3);
        if(num3 == true){
            cout << "Hasil True!" << endl;
        }else{
            cout << "Hasil False!" << endl;
        }
    } else if (val == "<=") {
        println(num1);
        println(val);
        println(num2);
        num3 = (num1 <= num2);
        println(num3);
        if(num3 == true){
            cout << "Hasil True!" << endl;
        }else{
            cout << "Hasil False!" << endl;
        }
    } else if (val == ">=") {
        println(num1);
        println(val);
        println(num2);
        num3 = (num1 >= num2);
        println(num3);
        if(num3 == true){
            cout << "Hasil True!" << endl;
        }else{
            cout << "Hasil False!" << endl;
        }
        
    } else {
        cout << "Input tidak sesuai!!" << endl;
        cout << "Harap Ulangi lagi!" << endl;
    }
}

void println(int val) {
    cout << val << " ";
}


void println(string val) {
    cout << val << " ";
}

int main() {
    user_input();

    cin.get();
    return 0;
}
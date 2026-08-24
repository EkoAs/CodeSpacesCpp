// komparasi C++
// hasil adalah bool
// ==, !=, <, >, <=, >=
#include <iostream>
using namespace std;
    int main(){
        int num = 2;
        int num1 = 5;
        int num2 = 5;
        bool hasil;
        // 0 = false
        // 1 = true
        // == sebanding => akan true jika nilai sama
        hasil = (num1 == num2);
        cout << " Hasil " << num << " == " << num1 << " => " << hasil << endl;
        // != sebanding => akan true jika nilai beda
        hasil = (num != num1);
        cout << " Hasil " << num << " != " << num1 << " => " << hasil << endl;
        // > kurang dari 
        hasil = (num1 > num);
        cout << " Hasil " << num1 << " > " << num << " => " << hasil << endl;
        // > lebih dari 
        hasil = (num < num1);
        cout << " Hasil " << num << " < " << num1 << " => " << hasil << endl;
        hasil = (num1 < num2); // <, > jika nilai sama alam false
        cout << " Hasil " << num1 << " < " << num2 << " => " << hasil << endl;

        // >= kurang dari sama dengan
        hasil = (num1 >= num);
        cout << " Hasil " << num1 << " >= " << num << " => " << hasil << endl;
        // >= lebih dari sama dengan
        hasil = (num <= num1);
        cout << " Hasil " << num << " <= " << num1 << " => " << hasil << endl;
        hasil = (num1 <= num2); // <= , >= akan true jika nilai sama
        cout << " Hasil " << num1 << " <= " << num2 << " => " << hasil << endl;























        cin.get();
        return 0;
    }
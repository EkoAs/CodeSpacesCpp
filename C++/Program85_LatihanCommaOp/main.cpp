#include <iostream>
using namespace std;

// Function prototypes
void operasi(int a, int b, int c, int num1, int num2);
void hitung(int val);

void user(){
    int a,b,c;
    int angka1;
    int angka2;
    cout << "Masukan Angka; ";
    cin >> angka1;
    
    cout << "Masukan Angka Kedua; ";
    cin >> angka2;
    
    c = 0;
    b = 0;
    a = 0;
    operasi(a,b,c,angka1,angka2);
}
void operasi(int a,int b,int c,int num1,int num2){
    c = (a = num1, hitung(num1), b = num2, hitung(num2), (a+b));
    cout << a << " + " << b << " = " << c << endl;
}
void hitung(int val){
    cout << val << endl;
}
int main(){
    user();


    cin.get();
    return 0;
}
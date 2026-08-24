#include <iostream>
using namespace std;

int main(){
    // variabel
    int a = 5;
    cout << "Address a : " << &a << endl;
    cout << "Nilai a : " << a << endl << endl;

    // references
    int &b = a;
    cout << "Address b : " << &b << endl;
    cout << "Nilai b : " << b << endl;

    //merubah nilai

    b = 10;
    cout << "Nilai a : " << a << endl;
    cout << "Nilai b : " << b << endl << endl;

    a = 20;
    cout << "Nilai a : " << a << endl;
    cout << "Nilai b : " << b << endl << endl;

    cin.get();
    return 0;
}
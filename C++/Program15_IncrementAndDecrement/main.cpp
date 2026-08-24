// increment dan decrement
// preincement dan postincrement

#include <iostream>
using namespace std;
int main(){
    int a=5;
    int b=5;
// post increment
    cout << a << endl; // 5
    a++; // a = a + 1
    cout << a << endl; // 6
    cout << a++ << endl << endl; // 5 karena di cetak dulu baru di tambah

    //preincrament
    cout << b << endl; // 5
    ++b;
    cout << b << endl; // 6
    cout << ++b << endl; // 7  karena di tambah dulu baru di cetak

    // increment

    cout << endl << endl;
    cout << --b << endl; // 6

    cin.get();
    return 0;

}
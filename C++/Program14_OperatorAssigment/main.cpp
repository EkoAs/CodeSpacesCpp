// operator assigment
#include <iostream>
using namespace std;
int main(){
    // assigment 
    int a = 10; // ini adalah assigment
    // melakukan manupulasi pada variable a
    // a = a + 3; // self manupulation

    // assigment operator
    //variabel = variable operator ekspersi
    // a       =      a    -      10 atau (10+2)
    // cara lebih simple
    // variable operator = ekspressi
    // a+=3
    a += 3; 
    cout << "ditambah 3 : " << a << endl;
    a -= 3;
    cout << "Dikurang 3 : "<< a << endl;
    a /= 3;
    cout << "dibagi 3 : " << a << endl;
    a *= 3;
    cout << "dikali 3 : " << a << endl;
    a %= 3;
    cout << "dimodulus 3 : " << a << endl;

    cin.get();
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 0;
    // loop tak hingga
    // while(a<10){
    //     cout << "hello";
    // }

    //loop dengan false
    // while(a<10){
    //     cout << a << " ";
    //     cout << "hello" << endl;
    //     // a = 11;
    //     // atau
    //     a+=1; // mengubah kondisi jadi false ketika sudah batas
    // }

    // contoh lain
    while(b < 20){
        b+=1;
        cout << "Perintah ke  " << b << endl;
    }
    cout << "end the program";
    cin.get();
    return 0;

}
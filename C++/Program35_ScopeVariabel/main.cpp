#include <iostream> // global and local scope
using namespace std;

// global variable
int x = 10; // karena bisa di panggil di int main

int ambilGlobal(){ // untuk memanggil/mengambil yang atas
    return x;
}
// 
int local(){
    int x = 5; // variabel local scopennye local()
    return x;
}

int main(){
    cout << "Global Variable: " << x << endl; // akses global variable
    int x = 8;  // local variable, hanya bisa diakses di dalam main
    cout << "Local Variable: " << x << endl; // akses local variable
    cout << "Ambil Global : " << ambilGlobal() << endl; // akses global variable
    cout << "Ambil Local : " << local() << endl; // akses local variable
    cout << "Local Variable: " << x << endl; // akses local variable

    // note : tiga nilai itu tiidakk akan saling menimpa dan menggangu satu sama lain kecuali
    
    // block variable
    // if (true)
    {
        int x = 1; // variabel x hanya bisa diakses di dalam block ini { }
        cout << "Block Variable: " << x << endl; // akses block variable
    }
    // kalo print block scope gapakal terpengaruh di luar blockny

    // ambil yg global tanpa ambilglobal() pakai
    cout << "Ambil Global: " << ::x << endl; // akses global variable
    return 0;
}
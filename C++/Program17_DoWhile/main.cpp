// sama aja kayak while, tapi kebalikannya
#include <iostream>
using  namespace std;
int main(){
    int a = 1;
    do{
        cout << " ini adalah data ke " << a << endl;
        a++; // cara break. menambah 1 setiap loop. sehingga kondisi menjadi false
    }while(a<10);

    // contoh lain
    float b = 2.0;
    do{
        cout << " data float ke " << b << endl;
        b += 0.5;

    }while(b < 10.0);

    // jika false maka hanya mencetak sekali saja. karana?
    // ya aksinya sudah dilakukan duluan baru di cek kondisinya
    cin.get();
    return 0;
}
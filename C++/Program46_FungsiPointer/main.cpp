#include <iostream>
using namespace std;

// kalau pakai pointer, tidak perlu pakai int
// void fungsi(int b){
//     cout << "Address b : " << &b << endl; // 
//     cout << "Nilai b : " << b << endl; //deferensing

// }


// int main(){
//     int a = 5;
//     cout << "Address a : " << &a << endl;
//     cout << "Nilai a : " << a << endl;
//     fungsi(a); // fungsi dengan input pointer

//     cin.get();
//     return 0;
// }

//kalo yyg ini dia pakai satu memory


//prototype. * = pointer
void fungsi(int *);
void kuadrat(int *);

int main(){
    int a = 5;
    cout << "Address a : " << &a << endl;
    cout << "Nilai a : " << a << endl;
    fungsi(&a); // fungsi dengan input pointer
    kuadrat(&a);
    cout << "Nilai a setelah kuadrat : " << a << endl;

    cin.get();
    return 0;
}

void fungsi(int *b){
    cout << "Address b : " << b << endl; // 
    cout << "Nilai b : " << *b << endl; //deferensing

}


void kuadrat(int *valPtr){ // tanpa parameter a b c
    *valPtr = (*valPtr) * (*valPtr);
}
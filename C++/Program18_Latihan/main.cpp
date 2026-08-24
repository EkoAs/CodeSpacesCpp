// latihan do and while dengan input user
#include <iostream>
#include <string> // untuk mendeklarasikan strung
using namespace std;
int main(){
    char userOption;
    cout << "1. While" << endl << "2. Do While" << endl;
    cout<<"Masukan Opsi [1,2] : ";
    cin >> userOption;
    if (userOption != 2){
        string b;
        int a;
        int x = 1;
        cout << "Masukan teks disini : ";
        cin >> b;
        cout << endl << "Masukan Jumlah : ";
        cin >> a;
        cout << endl << endl;
        while(x <= a){
            x++;
            cout << b << endl;
           
        }
    }else{
        string b;
        int a;
        int x = 1;
        cout << "Masukan teks disini : ";
        cin >> b;
        cout << endl << "Masukan Jumlah : ";
        cin >> a;
        cout << endl << endl;
        do{
            cout << b << endl;
            x++;
        }while(x <= a);
    }
    cin.get();
    return 0;
}
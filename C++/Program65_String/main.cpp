#include <iostream>
#include <string>
using namespace std;

int main(){

    char kata[5] = {'m','o','b','i','l'};
    cout << "Kata menggunakan char array: " << kata;
    cout << endl;

    // menggunakan std libary
    string kata2("motor");
    cout << "Kata menggunakan string: " << kata2;
    cout << endl;

    // atau 
    string kata3 = "sepeda";
    cout << "Kata menggunakan string: " << kata3;
    cout << endl;

    // dengan input user
    string nama;
    cout << "Masukan nama anda: ";
    cin >> nama;
    cout << "Nama anda adalah: " << nama << endl;

    cin.get();
    return 0;
}
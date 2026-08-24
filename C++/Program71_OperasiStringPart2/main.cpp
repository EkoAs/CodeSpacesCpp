#include <iostream>
#include <string>
using namespace std;


int main(){
    string kalimat1("hallo  dunia");
    
    // menambahkan di paling akhirt
    kalimat1.append(" hallo");
    cout << kalimat1 << endl;
    
    // clear semua karakter
    kalimat1.clear();
    cout << "Ini udah di clear : " << kalimat1 << endl;
    
    // mengganti semua karakter
    kalimat1.assign("hel");
    cout << kalimat1 << endl;
    
    kalimat1.assign("hel yeah");
    cout << kalimat1 << endl;
    
    

    // c str style, atau per char pakai index
    char greeting[] = "Hello, World!";
    cout << greeting << endl;


    cin.get();
    return 0;
}
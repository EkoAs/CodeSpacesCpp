#include <iostream>
#include <bitset> // menampilakn nilai bit nya dari sebuah data
#include <string>
using namespace std;

void printB(unsigned short val,string nama){
    cout << nama << " = " << bitset<8>(val) << endl;

}
int main(){
    // bitwise operator
    // & and
    // | or
    // ^ xor
    //~ not
    // << shl shift bits left
    // >> shr ~~''~~''~~ right

    // short lebih kecil dari int dan tidak bertanda
    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;
    //bitset 8 bit dari a
    printB(a,"a");


    cout << "AND & "<< endl;
    c = a & b; // tabel and
    printB(a,"a");
    printB(b,"b");
    printB(c,"c");
    
    cout << "\n| OR "<< endl;
    c = a | b; // tabel and
    printB(a,"a");
    printB(b,"b");
    printB(c,"c");
    
    
    cout << "\n^ XOR "<< endl;
    c = a ^ b;
    printB(a,"a");
    printB(b,"b");
    printB(c,"c");
    
    cout << "\n ~ NOT "<< endl;
    c = ~a;
    printB(a,"a");
    printB(c,"c");
    
 
    cout << "\n << shl "<< endl;
    c = a << 1; //geser 1 ke kiri sebanyak 1 kali
    printB(a,"a");
    printB(c,"c");
    cout << "\n >> shr "<< endl;
    c = a >> 1; //geser 1 ke kannan sebanyak 1 kali
    printB(a,"a");
    printB(c,"c");

    // kalo shr kekanan sampe mentok, 1 nya kan hilang. akan di taruh di address setelahnya
    // datanya gak balik ke belakang, masuk ke addres pointer ke yg selanjutnya
    cin.get();
    return 0;
}
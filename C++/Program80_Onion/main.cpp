#include <iostream>
// #include <string>
using namespace std;

union DataUnion {
    int a;
    char b[4];
};
int main(){
    DataUnion data_union;
    data_union.a = 12345642;
    cout <<"Data A : "<<data_union.a << endl;
    cout <<"Data B : "<<data_union.b << endl;
    
    // rubah yg b
    data_union.b[0]='a';
    data_union.b[1]='b';
    data_union.b[2]='c';
    data_union.b[3]='d';

    // data a bisa berubah . pertama int, kedua karakter, jadu yg a ikut berubah, 
    cout <<"Data A : "<<data_union.a << endl;
    cout <<"Data B : "<<data_union.b << endl;
    cin.get();
    return 0;
}
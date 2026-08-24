#include <iostream>
#include <string>
using namespace std;


int main(){
    // komma dipakai di int a,b,c
    // void fungsi(inta,intb)
    // ini diatas bukan koma operator. kom abisasa

    // koma operator ada                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
    // (ekspression1, ekspression2) memanggil fungsi dam melalukukan apapun, dan dilalukan secara berurutan

    int a;
    int b;
    int c;

    a = (b = 1, cout << b << endl, c = 2,cout << c << endl,(b+c)); // koma operator pakai ()
    // b+c harus ada di terakhir, karena akan di taruh di si a
    cout << a << endl;
    
    // bisa juga panggil fungsi didalam nya
    
    //    void print(int val){
    //      cout << val << endl;}
    
    // a = (b = 1, print(b), c = 2, print(c),(b+c)); // koma operator pakai ()

    cin.get();
    return 0;
}
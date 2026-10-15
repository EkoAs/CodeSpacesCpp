#include <iostream>
using namespace std;


int hitung(int a, int b){
    return a + b;


}



int main(){
    int a, b;
    int hasil = 0;

    a= 10;
    b=10;
    hasil = hitung(a, b);

    cout<<a<<" + "<<b<<" = "<<hasil<<endl;
    cin.get();
    return 0;
}
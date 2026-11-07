#include <iostream>
using namespace std;


void luas(int a,int b,int c, int *hasil){
    *hasil = a * b * c;
}

int main(){
    int a,b,c;
    a=2;
    b=2;
    c=2;
    int hasil = 0;
    luas(a,b,c,&hasil);
    cout<<hasil<<endl;



    cin.get();
    return 0;
}
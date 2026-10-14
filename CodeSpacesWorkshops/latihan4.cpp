#include <iostream>
using namespace std;

//fungsi tanpa deklarasi
void callMe(){
    cout<<"hello, this is void function"<<endl;
};

// dengan aksi
void hitung(){
    double r, luas;
    const double PI=3.14159;
    
    cout<<"masukan jari2: ";
    cin>>r;
    luas=PI*r*r;
    cout<<"luas lingkaran "<< luas<<endl;
}


int main(){
    // call function
    callMe();
    hitung();
    
    
    cin.get();
    return 0;
}
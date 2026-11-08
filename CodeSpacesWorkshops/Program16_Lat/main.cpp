#include <iostream>
using namespace std;

// fibonacci
int fib(int n){
    if(n==1 || n==2){
        return 1;
    }else{
        return fib(n-2) + fib(n-1);
    }
}

// faktorial
int fac(int n){
    if(n<=1){
        return 1;
    }else{
        return n * fac(n -1);
    }
}

// pangkat
int pangkat(int basis, int e){
    if(e==0){
        return 1;
    }else{
        return basis * pangkat(basis, e-1);
    }
}

int main(){

    // fibbonacci
    int x;
    int nilai =  3;

    x = fib(nilai);
    cout<<"hasil fibonacci: "<< nilai<<endl;
    cout<<x<<endl;
    
    
    
    // factorial
    int hasil;
    hasil = fac(nilai);
    cout<<"hasil faktorial: "<< nilai<<endl;
    cout<<hasil<<endl;



    // pangkat
    x = 3;
    int y = 2;
    int hasil2;
    hasil2 = pangkat(x, y);
    cout<<"hasil faktorial: "<< x <<" pangkat "<<y<<endl;
    cout<<hasil2<<endl;



    cin.get();
    return 0;

}
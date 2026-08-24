#include <iostream>
using namespace std;

//fibonacci pada rekursif adalah 0,1,1,2,3,5,8,13,21,34,55,...
int fibonacci(int n);

int main(){
    int a;
    cout << "Menghitung ke n:  ";
    cin >> a;
    int hasil = fibonacci(a);
    cout << "Fibonacci ke-" << a << " adalah " << hasil << endl;

    cin.get();
    return 0;
}
int fibonacci(int n){
    cout << "fungsi n :" << n << endl;
    if ((n == 0) || (n == 1)){
        return n;
    }else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
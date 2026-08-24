#include <iostream>
using namespace std;

int pangkat(int a, int b){
    if (b <= 1){
        cout << "akhir dari program" << endl;
        return a;

    }else{
        return a * pangkat(a,b-1);
        // penjelasan tiap tahapan sampe b = 1
        // pangkat(2,3) = 2 * pangkat(2,2)
        // pangkat(2,2) = 2 * pangkat(2,1)
        // pangkat(2,1) = 2
        // jadi pangkat(2,3) = 2 * 2 * 2 = 8
        // banyak nya jumlah 2 berasal dari b 
    }
}

int faktorial(int a){
    if (a <= 1){
        return 1;
    }else{
        return a * faktorial(a-1);
    }
}

int main(){
    cout << pangkat(2,3) << endl;
    cout << faktorial(3);
    cout << endl;
    cin.get();
    return 0;
}
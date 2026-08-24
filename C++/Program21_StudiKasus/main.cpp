// menggunakan fibonacci
#include <iostream>
using namespace std;
int main(){
    // F_N = f_n1 - f_n2
    int n;
    int f_n, f_n1, f_n2;
    cout << "perogram deret" << endl;
    cout << "Masukan Nilai ke-n : ";
    cin >> n;
    
    // inisialisasi 
    // pengin tau awalnya
    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2;
    for(int i = 1; i < n; i++){
        
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        cout << f_n << endl;
 
    }














    return 0;
}
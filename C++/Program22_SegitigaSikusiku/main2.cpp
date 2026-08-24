#include <iostream>
using namespace std;
int main(){
    
    int n;
    cout << "Masukan  panjang pola : ";
    cin >> n;
    cout <<"pola 3 \n" << endl;
    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++ ){
            cout << " ";
        }
        for(int k = n; k >= i; k--){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl; // meng enter setiap baris
    
    cout <<"pola 4 \n" << endl;
    
   
        
    for (int i = 1; i < n; i++){
        for (int j = n; j > i; j-- ){
            cout << " ";
            }
        for(int k = 1; k <= i; k++){
            cout << "*";
            }
        cout << endl;
            }
       
        
        
       
        cin.get();
    return 0;
}
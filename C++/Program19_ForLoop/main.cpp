#include <iostream>
using namespace std;
int main(){
    // for(inisialisasi; kondisi; increment){ aksi }
    
    cout<<"contoh satu"<<endl;
    for(int i = 1; i <= 10; i++){
        cout << i << endl;
    }
    
    cout<<endl<<"contoh dua"<<endl;
    for(int i = 1; i <= 10; i+=2){
        cout << i << endl;
    }
    
    cout << endl << "contoh tiga" << endl;
    for(int i = 1; i >= -10; i--){
        cout << i << endl;
    }
    
    cout << endl <<"contoh empat"<< endl;
    int num = 1;
    for(int x = 1; x < 10; x++, num += x){
        cout << num << " | | " << x << endl;
    }









    cin.get();
    return 0;
}
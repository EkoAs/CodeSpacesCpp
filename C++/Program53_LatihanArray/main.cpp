#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int,10> nilai;
    cout << "Program menampilkan grafik nilai" << endl<<endl;
    for (int i = 0; i <= nilai.size() ;i++){
        cout << "Jumlah mahasigma dgn Masukan nilai : ";
        if (i == 0){
            cout << "0 - 9 : ";
            // cin >> nilai[i]; 
        }else if(i == 10){
            cout << "100 : ";
            // cin >> nilai[i];
        }else{
            cout << i*10 << " - " << (i*10)+9 << ": ";
        }
        cin >> nilai[i];
    
    }

    cout << endl << "Program menampilkan grafik nilai" << endl<<endl;
    for (int i = 0; i <= nilai.size(); i++){
        if (i == 0){
            cout << "0 - 9 :";
            // cin >> nilai[i]; 
        }else if(i == 10){
            cout << "100 : ";
            // cin >> nilai[i];
        }else{
            cout << i*10 << " - " << (i*10)+9 << ": ";
        }
        for (int j = 0; j <= nilai[i]; j++){
            cout << "*";
        }
        cout << endl;

    }


    cin.get();
    return 0;
}
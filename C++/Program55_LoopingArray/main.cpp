#include <iostream>
#include <array>
using namespace std;


int main(){
    //loop khusus array C++ 11 keatas
    /*
    for(auto& element : array){
        statements;
    }
    
    */
    int nilai[10] = {1,2,3,4,5,6,7,8,9,10};// atau
    // arrat<int,10> nilai = {1,2,3,4,5,6,7,8,9,10};
    // for (int i = 0; i < 10; i++){ // tanpa akhir karena i < 11
    //     cout << nilai[i] << " ";
    // }

    for(int nilaiUtama : nilai){ // panjang array otomatis
        cout << nilaiUtama << " ";
        cout << &nilaiUtama << endl; // alamat memori nilaiUtama berbeda dengan nilai
        // nilaiUtama = 1 tidak akan mengubah nilai array
    }
    cout << endl;
    // mengambil addres memori asli array jadi bisa di ubah nilainya
    for(int &nilairef : nilai){ // panjang array otomatis
        // cout << nilairef << " ";
        // cout << &nilairef << endl << endl; // alamat memori nilairef sama dengan nilai
        //manipulasi nilai array dengan reference
        nilairef *= 2; // mengubah semua nilai array menjadi 8
        
    }
    cout << endl;
    for(int nilaiUtama : nilai){ // panjang array otomatis
        cout << nilaiUtama << " ";
        cout << &nilaiUtama << endl; // alamat memori nilaiUtama berbeda dengan nilai
    }
    cin.get();
    return 0;
}
#include <iostream>
#include <array> 
#include <cstdlib>
using namespace std;


int main(){
    int numbers[5] = {2,3,2,4,2};
    // array<int,5> nilai;
   
    for (int n : numbers) {
        cout << n << "  ";
    }

    cout << "\nThe numbers are: ";

  
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << "  ";
    }

    cout << endl;



    // dengan input
    // int user[5];
    // for(int i = 0; i<5;++i){
    //     cout << "Masukan Input : ";
    //     cin >> user[i];
    // }
    // // cetak hasil
    // for(int i = 0; i < 5; ++i){
    //     cout << user[i] << "  ";
    // }

    // ukuran array
    // cout << "Ukuran : " << nilai.size() << endl;

    // // address awal dari array
    // cout << "Address awal : " << nilai.begin() << endl;
    // // address akhir dari array
    // cout << "Address akhir : " << nilai.end() << endl;
    // // nilai dengan index
    // cout << "Nilai dengan index 2 : " << nilai.at(2) << endl;

    // loop nilai berurutan 1 sampai 20
    array<int,20> data;
    data.fill(0);
    for (int i = 1; i < 20; ++i){
        data[i] = (1+(rand() %8)); // nilai random 1-8 // 1+ = mencegah nol 0 muncul.
        cout << data[i] << "  "; // %8 maksimum nilai
    }
    cin.get();
    return 0;
}
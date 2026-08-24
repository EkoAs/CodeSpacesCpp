#include <iostream>
#include <array> // array juga menggunakan namespace std
// using namespace std;


int main(){
    // membuat array dengan std library
    // array<int, jumlah array> nama array
    std::array<int,5> nilai;
    // array sanga berteman dengan looping
    for(int i = 0; i <= 4; i++){ // batasnya 4 karena indeks 5 mulai dari nol
        nilai[i] = i;
        std::cout << "nilai[" << i << "] = " << nilai[i] << "address nya : " << &nilai[i] << std::endl;

    }

    // ukuran array
    std::cout << "Ukuran : " << nilai.size() << std::endl;

    // address awal dari array
    std::cout << "Address awal : " << nilai.begin() << std::endl;
    // address akhir dari array
    std::cout << "Address akhir : " << nilai.end() << std::endl;
    // nilai dengan index
    std::cout << "Nilai dengan index 2 : " << nilai.at(2) << std::endl;

    std::cin.get();
    return 0;
}
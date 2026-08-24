#include <iostream>
// #include <vector>
#include <array>
#include <algorithm>
// using namespace std;

const size_t arraySize = 10;
void printArray(std::array <int, arraySize> &angka){
    std::cout << "Array elements: ";
    for (int &a : angka){
        std::cout << a << " ";
    }
    std::cout << std::endl;
}
// void printArray(array <char, arraySize) &angka){
//     cout << "Array elements: ";
//     for (int &a : angka){
//         cout << a << " ";
//     }
//     cout << endl;
// }
int main(){
    std::array <int, arraySize> angka = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // mencari aangka 5
    int searchAngka = 5;
    bool ketemu;
    //ada 2 cara, kita sort dulu
    // search dengan binary search => ada atau tidak
    //cara search
    // std::find(angka.begin(), angka.end(), searchAngka) != angka.end() ?
    //     std::cout << "Angka " << searchAngka << " ditemukan dalam
    // nilai harus boolean

    std::cout << "Masukan angka yang dicari: ";
    std::cin >> searchAngka;
    std::sort(angka.begin(), angka.end());
    ketemu = std::binary_search(angka.begin(), angka.end(), searchAngka);
    if (ketemu){
        std::cout << "Angka " << searchAngka << " ditemukan dalam array." << std::endl;
    } else {
        std::cout << "Angka " << searchAngka << " tidak ditemukan dalam array." << std::endl;
    }
    std::cin.get();
    return 0;
    
}
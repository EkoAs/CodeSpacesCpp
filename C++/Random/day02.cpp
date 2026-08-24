#include <iostream>
using namespace std;
    int main(){
        std::cout << "Operator Arimatika" << std::endl;
        float angka = 1.89f;
        int angka2 = 2.65f; // Note: This will truncate the float to an int
        std::cout << "Angka 1: " << angka << std::endl;
        std::cout << "Angka 2: " << angka2 << std::endl;
        // Penjumlahan
        int hasil = angka + angka2;
        std::cout << "Hasil dari " << angka << " + " << angka2 << " = " << hasil << std::endl;
    return 0; 
    }
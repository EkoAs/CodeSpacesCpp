#include <iostream>
#include <array>
#include <algorithm> // Untuk fungsi std::sort
// using namespace std; // Tidak digunakan, lebih baik gunakan std:: secara eksplisit


const size_t arraySize = 10;
void printOut(std::array<int, arraySize> &angka){
	std::cout << "Array: ";
	for(int &a : angka){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}


void printOut(std::array<char, arraySize> &huruf){
	std::cout << "Array: ";
	for(char &a : huruf){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}
 
int main(){
	std::array <int, arraySize> angka = {1,3,4,7,4,3,5,8,9,0};
	std::array <char, arraySize> huruf = {'f','d','t','t','t','h','a','q','g','z'};
	printOut(angka); 
	printOut(huruf); 
	
	std::cout << std::endl;
	
	// mengurutkan berdasarkan besaarnya
	std::sort(angka.begin(), angka.end());
	printOut(angka);// sort harus di awal dan di akhir. pakai begin() dan end()
	
	// bisa juga utuk huruf char
	//  huruf otomasikas masuk ke char buka ke int karena materi overloading fungsi
	std::sort(huruf.begin(), huruf.end());
	printOut(huruf);


	std::cin.get();
	return 0;
}
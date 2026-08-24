#include <iostream>
#include <array>
#include <algorithm>
const int arraySize = 5;

int main(){
    
    
    // mengurutkan berdasarkan besaarnya
	std::array <int, arraySize> a = {1,3,4,2,5};
	std::sort(a.begin(), a.end());
    std::cout << "Sort() : ";
	for (int &n : a){
        std::cout << n << " ";
    }
	
    std::cout << std::endl;
	// mengurutkan secara terbalik
    std::array <int, arraySize> b = {1,3,4,2,5};
	std::reverse(b.begin(), b.end());
    std::cout << "Reverse() : ";
	for (int &n : b){
        std::cout << n << " ";
    }
    
    std::cout << std::endl;
	// mengurutkan 3 elemen terkecil
    std::array <int, arraySize> c = {1,3,4,2,5};
	std::partial_sort(c.begin()+3 c.end());
    std::cout << "Partial_sort() : ";
	for (int &n : c){
        std::cout << n << " ";
    }

	std::cin.get();
	return 0;
}
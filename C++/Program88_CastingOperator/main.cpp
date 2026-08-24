#include <iostream>
#include <string>
using namespace std;
// casting operator		


int main(){
	int a = 5;
	float b = 6.67f;
	char c = 'd';
	
	cout <<"hasil A + B : " << a + b << endl;
	cout <<"hasil A + B : " << a +(int)b << endl;
	//hasil akhir float, artinya dia implit kompilinh
	int hasil;
	hasil = a + b;
	cout << "hasil int, koma hilang : " << hasil << endl; // hasil nya 11
	//  contoh lain 
	// hasil a * back//
	// kalo a / b maka, membuat jadi lebih ekplisit
	// casting = dijabarkan a ke float
	hasil = (float)(a)/b;       //ekplisit ke floar
	cout << "a to float a/b : " <<hasil << endl;

	cout << "Hasil C + a : " <<c + a << endl;
	// 105
	// karena d ada nilainya
	// (int)c = 100 + 5 = 105
	// ubah ke karakter
	cout << " hasil c + a ke char : "<<(char)(c+a) << endl;
	// dipindah ke 5 
	cin.get();
	return 0;
}
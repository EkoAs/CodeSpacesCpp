// akses substrring 
#include <iostream>
#include <string>
using namespace std;

int main(){
	// deklarasi dan inialisasi
	string kalimat_1("dayat suka olahraga agar sehat gacor");
	string kalimat_2("ucup makan pisang dan");
			 
	cout << "1. " << kalimat_1 << endl;
	cout << "2. " << kalimat_2 << endl<< endl;
			
	// substing, mengambil string di tengah tengah 
	// ambil olahraag
	//  sub str punya 2 input. pertama indeks sama panjang (olahraga indeks ke11,8
	cout <<"Kalimat dari indeks 11, panjang 8: "<< kalimat_1.substr(11,8) << endl<<endl; //  ambil 8 digit
	// olarga
			

	// kebalikan substring. mau tau posisinya dimana, atau mencari posisi dari substring
	cout <<"Kalimat Olahraga ke : " <<kalimat_1.find("olahraga")<< endl<<endl;
	// kalo yg dicari gada hasilnya akan berupa angka
				
				
	// taruh indeksnya pada variabel
	int a = kalimat_1.find("ya");
	cout << "Variabel A menyimpan find a: " << a << endl<< endl;


	// cari yg ada didepannya
	cout <<"mulai lalu maju: "<<kalimat_1.find("ga",a + 1)<<endl<<endl;
	// memulai dari mana si ya nya. dari kesatu akan terus maju sampai ya terakhir
				  
				  
	// mencari posisinya dari belakang
	cout <<"posisi dari belakang: "<< kalimat_2.rfind("ola") <<endl;
	// karena r dia akan mundur 1 langkah sebelum an 


	cin.get();
	return 0;}

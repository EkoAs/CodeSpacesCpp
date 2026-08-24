#include <iostream>
#include <string>

int main(){
// getline console string
//  ambil data string, baca dan proses
  	std::string kalimat_input;
	//  get ;ine (cim variabel
	std::cout << "masukan kalimat: ";
 	std::getline(std::cin, kalimat_input); // get line ambil dari iostream		 
  	std::cout <<"kalimat Input: "<< kalimat_input<< std::endl;


	// hitung julah kata yg kita masukan
	int posisi = 0;
	int jumlah = 0;
	while(true){
		posisi = kalimat_input.find (" ",posisi +1);
		// setiap spasi beraarti 1 kalimat
		jumlah++;
		std::cout <<"posisi: "<< posisi <<std::endl<<"Jumlah: "<< jumlah << std::endl;
		// kalo lewat , balik lagi ke belakang jadi -1 posisi nys (kata terakhir)
		
		if (posisi < 0){
			break;
		}
	}

	std::cout << "jumlaj kata: " << jumlah;


	std::cin.get();
	return 0;       
}
#include <iostream>
#include <string>
using namespace std;


// struk aadalah sebua data
// yang dibentuk oleh bbeberapa data


// misal. aku pnya jeruk. jeruk punya komponen2
// jeruk = buah
// jeruk.warna
// jeruk.berat
// jeruk.harga
// jeruk.rasa

// // pakaitipe data yg ada
// jeruk_warna = "orange"

// pakai struct bisa membuat tipe data yg mempunyai sub nya komponen
struct buah{  // tipe data buah yg mempunyai beberapa komponen
    // komponennya
    string warna;
    float berat;
    int harga;
    string rasa;
};// mirid template
// berfungsi untukk 

// struct mahasiswa
// ada nama, umur, nim, ipk


int main(){
    buah apel; // membuat variabel apel dari tipe data struct buah
    // tidak direkomendasikan
    cout << apel.warna << endl;
    
    
    // mengisi data ke komponen struct
    
    apel.warna = "merah";
    apel.berat = 250.50f; //f => gram
    apel.harga = 50000;
    apel.rasa = "manis kesat";
    cout << "apel berwarna " << apel.warna << ", beratnya " << apel.berat << " gram, harganya Rp. " << apel.harga << ", rasanya " << apel.rasa << endl;
    
    
    // buat lagi yg baru
    buah terong;
    terong.warna = "ungu";
    terong.berat = 150.50f; //f => gram
    terong.harga = 2000;
    terong.rasa = "enak";
    
    cout << "terong berwarna " << terong.warna << ", beratnya " << terong.berat << " gram, harganya Rp. " << terong.harga << ", rasanya " << terong.rasa << endl;


    cin.get();
    return 0;
}
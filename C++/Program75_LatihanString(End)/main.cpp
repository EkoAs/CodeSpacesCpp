#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype> // to lower kalimat
using namespace std;

void clear();
void input_user();
void hitung_kal(string kalimat);
void manipulasi(string kalimat);
void cari_dataManual(string kalimat);

int main(){
    input_user();



    cin.get();
    return 0;
}

// bersikan windos
void clear(){
    #ifdef _WIN32
        system("cls");
    #else
        cout << "\x1B[2J\x1B[H";
    #endif
}

// meminta input string
void input_user(){
    clear();
    for (int i = 0; i <= 30; ++i){
        cout<<'=';
    }
    cout << endl;
    string kalimat;
    cout << "Masukan Kalimat: ";
    getline(cin,kalimat);
    cout<< endl << "Kalimatmu: "<<kalimat<< endl;
    hitung_kal(kalimat);
    manipulasi(kalimat);
}

// ===================================HITUNG PER VOKL=======================================
void hitung_kal(string kalimat){
    int posisi, jumlah, kata_a, kata_i, kata_u, kata_e, kata_o;
    for (int i = 0; i <= 30; ++i){
        cout<<'=';
    }
    cout << endl;
    kata_a = kalimat.find('a');
    kata_i = kalimat.find('i');
    kata_u = kalimat.find('u');
    kata_e = kalimat.find('e');
    kata_o = kalimat.find('o');

    // menyimpan data ke vector
    vector<int> data_list = {kata_a, kata_i, kata_u, kata_e, kata_o};
    vector<char> huruf_vok = {'a','i','u','e','o'};

    // buat kecilkan semua huruf, (mulai, end, mulai lagi, tolower)
    transform(kalimat.begin(), kalimat.end(), kalimat.begin(), ::tolower);
    
    
    //cari data dalam kalima, pakai loop khusus
    for(char vokal : huruf_vok){
        int posisi = count(kalimat.begin(), kalimat.end(), vokal);
        
        if(posisi == -1){
            posisi = 0;
        }
        cout << "Huruf " << vokal << " ditemukan sebanyak: " << posisi << endl;
    }
    
    
    for (int i = 0; i <= 30; ++i){
        cout<<'=';
    }
    cout << endl;
    }

// ======================================================================================
void manipulasi(string kalimat){
    int posisi=0;
    int jumlah=0;
    while(true){
        posisi = kalimat.find(" ", posisi+1);
        jumlah++;
        if (posisi < 0){
			break;
		}
        cout << "Jumlah kalimat: "<< jumlah+1<<"\n posisi: "<<posisi<<endl;
    }
    
    char opsi;
    cout<<"ingin Cari kalimat manual? (y/n): ";
    cin >> opsi;
    cin.ignore(); // membersihkan newline dari buffer input
    if(opsi == 'y' || opsi == 'Y'){
        cari_dataManual(kalimat);
    } else if(opsi == 'n' || opsi == 'N'){
        cout << "Terima Kasih!" << endl;
    } else {
        cout << "Opsi tidak dikenali!" << endl;
    }
}

void cari_dataManual(string kalimat){
    string kalimat_user;
    cout << "Masukan Kalimat: ";
    getline(cin,kalimat_user);
    vector<string> cari_kalimat;
    size_t posisi = kalimat.find(kalimat_user);
    if(posisi != string::npos){
        cout << "Kalimat " << kalimat_user << " ditemukan pada posisi: " << posisi << endl;
    } else {
        cout << "Kalimat " << kalimat_user << " tidak ditemukan!" << endl;
    }
    
    cout << endl << endl;
    for(int i = 0; i <= 30; ++i){
        cout << '=';
    }
    cout << endl;
    char user;
    cout << "Ingin tambah data? (y/n) : ";
    cin >> user;
    transform(user.begin(), user.end(), user.begin(), ::tolower);
    if(user != 'n'){
        clear();
        search_arry(string);
    }else{
        cout << " Program berakhir. " << endl;
        return false;
    }
    
    
}


void search_arry(string kalimat){
    array<array<int, 5>, 5> num = kalimat;
    clear();
    string user_input;
    bool temukan = false;
    cout << "Masukan kata yg anda cari: ";
    cin >> user_input;
    for(size_t i = 1; i <= (kalimat)

}
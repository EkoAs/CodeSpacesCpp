/*
NAMA  : Eko Asif Bahri
NIM   : 251351028
KELAS : Pagi A
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
const int MAX = 50;
/*Struct TANGGAL*/
typedef struct {
    int Tanggal;
    int Bulan;
    int Tahun;
} TANGGAL;

/*Struct TINGGAL*/
typedef struct {
    char Jalan[50];
    char Kode_Pos[10];
    char Kota[30];
} TINGGAL;


typedef struct {
    char NIP[20];
    char Nama[50];
    TINGGAL Alamat;
    char Jabatan[30];
    char Agama[20];
    TANGGAL Tanggal_Lahir;
    TANGGAL Tanggal_Mulai_Kerja;
    char Unit_Kerja[30];
} BIODATA;

// input tanggall
void tanggal(TANGGAL *T) {
    cout << "  Tanggal : ";
    cin >> (*T).Tanggal;
    cout << "  Bulan   : ";
    cin >> (*T).Bulan;
    cout << "  Tahun   : ";
    cin >> (*T).Tahun;
    cin.ignore();
}

/* Fungsi tanggal teks dd/mm/yyyy */
void FormatTanggal(TANGGAL T, char hasil[]) {
    sprintf(hasil, "%02d/%02d/%04d", T.Tanggal, T.Bulan, T.Tahun);
}

int main() {
    BIODATA P[MAX];
    int N; 
    int i;
    char tgl1[15], tgl2[15];

    cout << "Banyaknya pegawai : ";
    cin >> N;
    cin.ignore();
    for (i = 0; i < N; i++) {
        cout<<"\n";
        cout<<"Data pegawai ke-" << i + 1 << ":\n";
        cout<<"NIP       : ";cin.getline(P[i].NIP, 20);
        cout<<"Nama      : ";cin.getline(P[i].Nama, 50);
        
        cout<<"Alamat\n";
        cout<<"  Jalan    : ";cin.getline(P[i].Alamat.Jalan, 50);
        cout<<"  Kode Pos : ";cin.getline(P[i].Alamat.Kode_Pos, 10);
        cout<<"  Kota     : ";cin.getline(P[i].Alamat.Kota, 30);
        cout<<"Jabatan   : ";cin.getline(P[i].Jabatan, 30);
        cout<<"Agama     : ";cin.getline(P[i].Agama, 20);
        
        cout<<"Tanggal Lahir\n";
        tanggal(&P[i].Tanggal_Lahir);
        cout<<"Tanggal Mulai Kerja\n";
        tanggal(&P[i].Tanggal_Mulai_Kerja);
        cout<<"Unit Kerja: ";cin.getline(P[i].Unit_Kerja, 30);
    }


    cout << "\n";
    cout << "==========================================================================================================================" << endl;
    cout << left << setw(4) << "No" << setw(12) << "NIP" << setw(16) << "Nama"
         << setw(18) << "Jalan" << setw(9) << "Kode Pos" << setw(12) << "Kota"
         << setw(14) << "Jabatan" << setw(10) << "Agama"
         << setw(12) << "Tgl Lahir" << setw(12) << "Mulai Kerja"
         << setw(14) << "Unit Kerja" << endl;
    cout << "==========================================================================================================================" << endl;
    for (i = 0; i < N; i++) {
        FormatTanggal(P[i].Tanggal_Lahir, tgl1);
        FormatTanggal(P[i].Tanggal_Mulai_Kerja, tgl2);
        cout << left << setw(4) << i + 1
             << setw(12) << P[i].NIP
             << setw(16) << P[i].Nama
             << setw(18) << P[i].Alamat.Jalan
             << setw(9) << P[i].Alamat.Kode_Pos
             << setw(12) << P[i].Alamat.Kota
             << setw(14) << P[i].Jabatan
             << setw(10) << P[i].Agama
             << setw(12) << tgl1
             << setw(12) << tgl2
             << setw(14) << P[i].Unit_Kerja << endl;
    }
    cout << "==========================================================================================================================" << endl;


    cin.get();
    return 0;
}
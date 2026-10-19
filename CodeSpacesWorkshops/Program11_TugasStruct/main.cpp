// Nama     : Eko Asif Bahri
// Nim      : 251351028
// Kelas    : Pagi A


#include <iostream>
#include <iomanip>
using namespace std;
const int MAX=100;
typedef struct{
    char NIM[15];
    char Nama[50];
    float Nilai_tugas;
    float Nilai_kuis;
    float Nilai_UTS;
    float Nilai_UAS;
    float Nilai_akhir;
    char Nilai_huruf;
}NILAI;

char gradde(float nilai_akhir){
    char huruf;
    if(nilai_akhir> 85){
        huruf='A';
    }else if(nilai_akhir>70){
        huruf='B';
    }else if(nilai_akhir>55){
        huruf='C';
    }else if(nilai_akhir>40){
        huruf='D';
    }else{huruf='E';}
    return huruf;
}

int main(){
    NILAI M[MAX];
    int n;
    int i;

    cout<<"Masukan jumlah mahasiswaa: ";cin>>n;
    for(i=0;i<n;i++){
        cout<<endl; cout<<"data mahasiswa ke- "<<i+1<<":\n";
        cout<<"NIM      : "; cin>>M[i].NIM;
        cin.ignore();
        cout<<"NAMA     : "; cin.getline(M[i].Nama, 50);

        cout<<"TUGAS    : "; cin>>M[i].Nilai_tugas;
        cout<<"KUIS     : "; cin>>M[i].Nilai_kuis;
        cout<<"UTS      : "; cin>>M[i].Nilai_UTS;
        cout<<"UAS      : "; cin>>M[i].Nilai_UAS;
        
        M[i].Nilai_akhir=(0.1*M[i].Nilai_tugas)+(0.2* M[i].Nilai_kuis)
                        + (0.3 * M[i].Nilai_UTS)+(0.4*M[i].Nilai_UAS);

        M[i].Nilai_huruf = gradde(M[i].Nilai_akhir);
    }


    cout << "\n";
    cout << "==========================================================================================" << endl;
    cout << left << setw(5) << "No" << setw(14) << "NIM" << setw(20) << "Nama"
         << setw(8) << "Tugas" << setw(8) << "Kuis" << setw(8) << "UTS"
         << setw(8) << "UAS" << setw(10) << "Akhir" << setw(6) << "Huruf" << endl;
    cout << "==========================================================================================" << endl;
    for (i = 0; i < n; i++) {
        cout << left << setw(5) << i + 1
             << setw(14) << M[i].NIM
             << setw(20) << M[i].Nama
             << setw(8) << M[i].Nilai_tugas
             << setw(8) << M[i].Nilai_kuis
             << setw(8) << M[i].Nilai_UTS
             << setw(8) << M[i].Nilai_UAS
             << setw(10) << fixed << setprecision(2) << M[i].Nilai_akhir
             << setw(6) << M[i].Nilai_huruf << endl;
        cout.unsetf(ios::fixed);
    }
    cout << "==========================================================================================" << endl;


    cin.get();
    return 0;
}
// NAMA : EKo Asif Bahri
// Kelas : Pagi A
// Nim : 251351028
// latihan 1 dan 3 ada di file ini pak


#include <iostream>
#include <conio.h>
using namespace std;
// LATIHAN 1================================================== LATIHAN 1

// int main(){
//     float R,JML,X;
//     int n,i;
//     char ulang='y';
//     do{
//         system("cls");
//         cout<<"program menghitung nilai rata2...\n";
//         cout <<"masukan jumlah elemen yg akan di hitung ";
//         cin >> n;
//         for(i=1;i<=n;i++){
//             cout<<"masukan elemen ke-"<<i<<endl;
//             cin>>X;
//             JML+=X;
//         }
//         R=JML/n;
//         cout<<"nilai rata2 = "<<R<<endl;
//         cout<<"press any keu  "<<endl;
//         getch();
//         cout<<"apakah akan menghitung ulang (y/n): ";
//         cin>> ulang;

//     }while(ulang=='y');
//     cout<<"program endd"<< endl;

//     return 0;
// }



// LATIHAN 3====================================LATIHAN 3


const int NBaris = 2;
const int NKolom = 2;

int main() {
    int A[NBaris][NKolom];
    int B[NBaris][NKolom];
    int C[NBaris][NKolom];
    int i,j;

    for (i=0;i<NBaris;i++){
        for (j=0;j<NKolom;j++) {
            cout <<"Input elemen A["<<i<<"]["<<j<<"] : ";
            cin >>A[i][j];
        }
    }
    cout << "\n";
    for (i=0;i<NBaris;i++){
        for (j=0;j<NKolom;j++) {
            cout <<"Input elemen B["<<i<<"]["<<j<<"] : ";
            cin >>B[i][j];
        }
    }
    cout << "\n";

    for (i=0;i<NBaris;i++){
        for (j=0;j<NKolom;j++){
            C[i][j]=A[i][j]-B[i][j];
        }
    }
    cout <<"Matriks A : \n";
    for (i=0;i<NBaris;i++){
        for (j=0;j<NKolom;j++){
            cout<<A[i][j]<<" ";
        }
        cout << "\n";
    }

    cout <<"Matriks B : \n";
    for (i=0;i<NBaris;i++){
        for (j=0;j<NKolom;j++){
            cout<<B[i][j]<<" ";
        }
        cout << "\n";
    }

 
    cout <<"Matriks C = Matriks A - Matriks B : \n";
    for (i=0;i<NBaris;i++){
        for (j=0;j<NKolom;j++){
            cout<<C[i][j]<<" ";
        }
        cout << "\n";
    }

    return 0;
}
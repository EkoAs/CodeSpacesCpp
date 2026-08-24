#include <iostream>
#include <cmath>
#include <cstdlib> // untuk clear terminal
using namespace std;

void clear(){
    #ifdef _WIN32
        system("cls");
    #else
        cout << "\x1B[2J\x1B[H";
    #endif
}

char pilih;
int tambah();
int kurang();
float bagi();
int kali();
int kalkalator_biasa();
int pangkat(int num1, int num2);
void select();
int powls_math()









int inputUser(){
    char modus;
    cout << "1. Kalkulator Biasa"<< endl;
    cout << "2. Kalkulator Cmath"<< endl;

    cout<<"Masukan Modus Kalkulator: (1/2) ";
    cin >> modus;
    switch (modus)
    {
    case '1':
        kalkalator_biasa();
        break;
    
    default:
        select();
        break;
    }
    return 0;
}

int kalkalator_biasa(){
    clear();
    int num1, num2;
    cout << "1. Tambah" << endl;
    cout << "2. Kurang"<< endl;
    cout << "3. Bagi"<< endl;
    cout << "4. Pangkat"<< endl;
    cout << "5. pangkat"<< endl;

    for(int i=0; i<=30; ++i){
        cout << '=';
    }
    cout << endl;

    cout << "Masukan Opsi: ";
    cin >> pilih;
    
    switch(pilih){
        case '1':
            tambah();
            break;
        case '2':
            kurang();
            break;
        case '3':
            
            bagi();
            break;
        case '4':
            clear();
            int num1;
            int num2;
            cout <<"Masukan input :";
            cin >> num1;
            cout << endl;
            cout <<"Masukan pangkat : ";
            cin >> num2;
            pangkat(num1, num2);
            break;
        case '5':
            kali();
            break;
        default:
            cout << "Invalid option" << endl;
    }
    return 0;
}

int main(){
    inputUser();

    cin.get();
    return 0;
}

int tambah(){
    clear();
    int num1, num2;
    cout << "Masukan input: ";
    cin >> num1;
    cout << "Masukan input: ";
    cin>> num2;
    for(int i = 0; i <= 30; ++i){
        cout << '=';
    }
    cout << endl;
    float result = (num1 + num2);
    cout << "Hasil " << num1 << " + " << num2 << " Adalah " << result << endl;
    
    return 0;
}




int kurang(){
    clear();
    int num1, num2;
    for(int i = 0; i <= 30; ++i){
        cout << '=';
    }
    cout << endl;
    cout << "Masukan input: ";
    cin >> num1;
    cout << "Masukan input: ";
    cin>> num2;
    for(int i = 0; i <= 30; ++i){
        cout << '=';
    }
    cout << endl;
    float result = (num1 - num2);
    cout << "Hasil " << num1 << " - " << num2 << " Adalah " << result << endl;
    
    return 0;
}

int kali(){
    clear();
    int num1, num2;
    for(int i = 0; i <= 30; ++i){
        cout << '=';
    }
    cout << endl;
    cout << "Masukan input: ";
    cin >> num1;
    cout << "Masukan input: ";
    cin>> num2;
    for(int i = 0; i <= 30; ++i){
        cout << '=';
    }
    cout << endl;
    float result = (num1 * num2);
    cout << "Hasil " << num1 << " X " << num2 << " Adalah " << result << endl;
    
    return 0;
}


float bagi(){
    clear();
    float num1, num2;
    for(int i = 0; i <= 30; ++i){
        cout << '=';
    }
    cout << endl;
    
    cout << "Masukan input: ";
    cin >> num1;
    cout << "Masukan input: ";
    cin>> num2;
    for(int i = 0; i <= 30; ++i){
        cout << '=';
    }
    cout << endl;
    float result = (num1 / num2);
    cout << "Hasil " << num1 << " : " << num2 << " Adalah " << result << endl;
    
    return 0;
}

int pangkat(int num1, int num2){
    
    for(int i = 0; i <= 30; ++i){
        cout << '=';
    }
    cout << endl;
    int result = pow(num1,num2);
    cout << num1 << " pangkat " << num2 << " Adalah: " << result << endl;
    return 0;
} 

void select(){
    clear();
    for(int i = 0; i<=30; ++i){
        cout << '=';
    }
    cout << endl;
    
    cout << "1." << "pilihan "<< endl;
    cout << "2." << "pilihan "<< endl;
    cout << "3." << "pilihan "<< endl;
    cout << "4." << "pilihan "<< endl;
    cout << "5." << "pilihan "<< endl;
    
    for(int i = 0; i<=30; ++i){
        cout << '=';
    }
    cout << endl;
    char option;
    cout << "Masukan pilihan: (1/2/3/4/5) ";
    cin >> option;
    switch(option){
        case '1': 
            powls_math();
            break;
        default:
            cout << "Pilihan tak ada di opsi!" << endl;
    }
    
    return 0;
}

int powls_math(){
    clear();
    int num3, num4;
    cout<< "Masukan angka pertama : ";
    cin >> num3;
    cout<< "Masukan angka kedua : ";
    cin >> num4;
    int result = powl(num3,num4);
    cout << "hasilnya adalah " << result << endl;
    return 0;
}


// int bagi(){
//     clear();
//     int num1, num2;
//     for(int i = 0; i <= 30; ++i){
//         cout << '=';
//     }
//     cout << endl;
    
//     cout << "Masukan input: ";
//     cin >> num1;
//     cout << "Masukan input: ";
//     cin>> num2;
//     for(int i = 0; i <= 30; ++i){
//         cout << '=';
//     }
//     cout << endl;
//     int result = (num1 / num2);
//     cout << "Hasil " << num1 << " : " << num2 << " Adalah " << result << endl;
    
//     return 0;
// }
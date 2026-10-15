#include <iostream>
using namespace std;

void luas_persegi(){
    int s,l;
    l=0;
    cout<<"Maskan sisi persegi: ";
    cin>>s;
    l=(s*s);
    
    cout<<"luas persegi adalah: "<< l <<endl;
}

void luas_perPanjang(){
    int p, l;
    int hasil = 0;
    
    cout<<"masukan panjang: ";
    cin>>p;
    cout<<endl<<"masukan lebar: ";
    cin>>l;
    
    hasil=(p*l);
    cout<<"hasil panjang "<<p<<" lebar "<<l<<" "<<hasil<<endl;
}

void luas_seg(){
    int a, t;
    int L=0;
    
    cout<<"masukan alas: ";
    cin>>a;
    cout<<endl<<"masukan tinggi: ";
    cin>>t;
    
    L=0.5*a*t;
    cout<<"Hasil luas segitiga: "<<L<<endl;
    
}



int main(){
    char opsi,lanjut;
    do{
        cout<<"1. luas persegi"<<endl;
        cout<<"2. luas persegi panjang"<<endl;
        cout<<"3. Luas segitiga"<<endl;
        cin>>opsi;
        switch(opsi){
            case '1': luas_persegi(); break;
            case '2': luas_perPanjang(); break;
            case '3': luas_seg(); break;
            default : return 0;
        }
        
        cout <<endl<<"apakah ingin lanjut(y/n): ";
        cin>>lanjut;
    }while(lanjut=='y' || lanjut=='Y');
    
    
    
    
    cin.get();
    return 0;
}
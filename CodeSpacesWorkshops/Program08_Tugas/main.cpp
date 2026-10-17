#include <iostream>
using namespace std;


int luas(int p,int l){
    return p * l;
};


int pangkat(int a,int n){
    if(n==0){
        return 1;
    }else{
        return a * pangkat(a,n - 1);
    };
};




int main(){



    int a,b,c,n;
    int hasil=0;
    char user=' ';
    char opsi='n';
    // do{
    cout<<"1. hitung luas persegi panjang "<<endl;
    cout<<"2. hitung pangkat"<<endl;
    cout<<endl<<"Masukan input: ";
    cin>>opsi;
    switch (opsi) {
        case '1':
            cout<<"masukan panjang: ";
            cin>>a;
            cout<<endl<<"masukan lebar: ";
            cin>> b;
            hasil = luas(a,b);
            cout<<"hasil panjang "<<a<<" kali lebar "<<b<<" adalah "<< hasil<<endl;
            break;
        case '2':
            cout<<"masukan nilai utamanya: ";
            cin>>a;
            cout<<"masukan nilai n: ";
            cin>>b;
            hasil =pangkat(a, b );
            cout<<"hasil "<<a<<" pangkat "<<b<<" : "<< hasil<<endl;
            break;    



        default: cout<<"invalid code"<<endl; return 0;
    }

        
    // }while(opsi=='y' && opsi=='Y');







    cin.get();
    return 0;
}
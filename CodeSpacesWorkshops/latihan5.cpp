#include <iostream>
using namespace std;

void luas(){
    double r, luas;
    const double PI=3.14159;
    
    cout<<"masukan jari2: ";
    cin>>r;
    luas=PI*r*r;
    cout<<"luas lingkaran "<< luas<<endl;
}

void rata2(){
    int total = 0;
    int loop=0;
    cout<<"masukan jumlah nilai ";
    cin>>loop;
    
    int data[loop];
    int rata;
    
    for(int i=0; i<loop;i++){
        cout<<"masukan nilai ke "<< i+1 << " ";
        cin>>data[i];
        
        total+=data[i];
    }
    rata = total / loop;
    
    cout<<"nilai total: "<<total<<endl;
    cout<<"nilai ratr rata "<< rata<<endl;
}



int main(){
    char opsi;
    char lanjut='n';
    do{
        cout<<"1. luas llingkaran: "<<endl;
        cout<<"2. rata2"<<endl;
        
        cout<<endl<<"type here: ";
        cin>>opsi;
        if(opsi=='1'){
            luas();
        }else if(opsi=='2'){
            rata2();
        }else{
            return 0;
        }
        
        cout<<"ingin lanjut? (y/n): ";
        cin>>lanjut;
    }while(lanjut=='y' & lanjut=='Y');
    
    
    cin.get();
    return 0;
}
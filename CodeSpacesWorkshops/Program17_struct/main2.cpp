#include <iostream>
using namespace std;

// struct sebagai parameter fungsi
typedef struct{
    int x;
    int y;
} TITIK;


void TitikCenter(TITIK A1, TITIK A2,TITIK *TT){
    (*TT).x= (A1.x + A2.x)/2;
    (*TT).y= (A1.y + A2.y)/2;
}
int main(){
    TITIK A1,A2,T_Tengah;

    // input t1
    cout<<endl<<"masukan nilai X: "; cin>>A1.x;
    cout<<endl<<"masukan nilai Y: "; cin>>A1.y;
    
    cout<<endl<<"masukan nilai X: "; cin>>A2.x;
    cout<<endl<<"masukan nilai Y: "; cin>>A2.y;

    TitikCenter(A1,A2,&T_Tengah);
    cout<<"titik tengah x "<< T_Tengah.x<<endl;


    cin.get();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;



//template
struct kelas{
    string nama;
    int nim;
    float nilai;
};

int main(){
    // inisialisasi data
    kelas pagi;
    pagi.nama="admin besar emperor";
    pagi.nim=123456;
    pagi.nilai=120.2;

    cout<<"masukan namamu: ";
    cin>>pagi.nama;
    
    cout<<"masukan nim: ";
    cin>>pagi.nim;
    
    cout<<"masukan nilai: ";
    cin>>pagi.nilai;



    cout<<endl<<endl<<endl;
    cout<<"nama: "<< pagi.nama<<endl;
    cout<<"nim: "<< pagi.nim<<endl;
    cout<<"nilai: "<< pagi.nilai<<endl;


    cin.get();
    return 0;
}
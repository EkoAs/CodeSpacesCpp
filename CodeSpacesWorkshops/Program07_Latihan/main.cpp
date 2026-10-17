#include <iostream>
using namespace std;

int perkalian(int a, int b){
    int hasil=a+b;
    return hasil;
}







int main(){
    int a = 10;
    int b = 10;
    char user=' ';
    cout<<"masukan pilihan anda: ";
    cin>>user;
    do{
        int hasil= perkalian(a,b);
        cout<<"Hasil perkalian "<<a<<" X "<<b<<" = "<< hasil<<endl;

    }while(user=='y' && user=='Y');




    cin.get();
    return 0;

}
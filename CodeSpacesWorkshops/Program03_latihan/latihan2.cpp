#include <iostream>
using namespace std;



int main(){
    // array menghitung nilai rata2
    int nilai[3];
    int total=0;
    double rata2;
    
    for(int i=0;i<=3;i++){
        cout<<"masukan Nilai ke "<<i;
        cin>>nilai[i];
        total+=nilai[i];
        
    }
    rata2 = (double)total/3;
    cout <<"nilai rata "<<rata2<<endl;
    cout<<"Nilai total "<<total<<endl;
    
    cin.get();
    return 0;
}
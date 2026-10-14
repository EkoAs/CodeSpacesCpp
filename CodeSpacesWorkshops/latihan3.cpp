#include <iostream>
using namespace std;

int main(){
    int nilai[5];
    int total = 0;
    
    for(int i=0;i<5;i++){
        cout<<"Masukan nilai ke"<<i<<" ";
        cin>>nilai[i];
        
        total+=nilai[i];
    }
    
    cout<<total<<endl;
    return 0;
}
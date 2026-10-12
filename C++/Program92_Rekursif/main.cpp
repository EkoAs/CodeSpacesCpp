#include <iostream>
using namespace std;


int pangkat(int a,int b){
    if(b<=1){
        cout<<"ahir dari rekursif"<<endl;
        return a;
    } else {
        cout<<"rekursif" << endl;
        return a * pangkat(a,(b-1));
    }
}

int main(){
    int a, b;
    cout<<"masukan bilangan: ";
    cin>>a;
    cout<<endl<<"masukan pangkat: ";
    cin>>b;

    cout<<pangkat(a,b)<<endl;

    cin.get();
    return 0;
}
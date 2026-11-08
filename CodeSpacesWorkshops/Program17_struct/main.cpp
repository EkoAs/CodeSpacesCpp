#include <iostream>
using namespace std;

struct TITIK{
    int x;
    int y;
} T1;

int main(){
    struct TITIK T2;
    T2.x=2;
    cout<<"masukan : ";
    cin>>T1.x;
    cout<<endl<<"hasil T1.x "<<T1.x<<endl;
    cout<<endl<<"hasil T2.x "<<T2.x<<endl;

    cin.get();
    return 0;
}
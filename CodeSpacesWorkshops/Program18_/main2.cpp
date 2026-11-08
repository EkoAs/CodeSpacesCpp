#include <iostream>
using namespace std;

typedef struct{
    int x;
    int y;
}TITIK;


TITIK Buattitik(int a, int b){
    TITIK temp;
    temp.x=a;
    temp.y=b;
    return temp;
}

int main(){

    TITIK A1,A2,A3;
    A1=Buattitik(3,2);
    cout<<A1.x<<" "<<A1.y<<endl;
    
    A1=Buattitik(5,5);
    cout<<A1.x<<" "<<A1.y<<endl;

    A1=Buattitik(11,10);
    cout<<A1.x<<" "<<A1.y<<endl;

    cin.get();
    return 0;
}
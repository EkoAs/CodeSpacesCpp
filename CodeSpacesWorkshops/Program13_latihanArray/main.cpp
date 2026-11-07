#include <iostream>
#include <string>
using namespace std;


int main(){
    // array 1 dimensi
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;



    // array 2 dimensi
    int b[2][2]={{1,2},{3,4}};
    cout<<b[0][1]<<endl;

    // call pakai lopp
    for(int i=0; i<2;i++){
        for(int j=0;j<2;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cin.get();
    return 0;
}
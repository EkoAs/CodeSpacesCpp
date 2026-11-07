#include <iostream>
using namespace std;



void pesan(){
    int a=10;
    int b=10;
    cout<<"ini adalah fungsi tanpa nilai"<<endl;
    cout<<a + b<<endl;
}


// fungsi dengan nilai baik
int hasil(int a, int b){
    return a * b;
}
int main(){
    // tanpa nilai
    pesan();

    // dengan nilai
    int n=2;
    int n2=2;
    int c;

    c = hasil(n,n2);
    cout<<"hasil"<<n<<" x "<<n2<< " = "<< c<<endl;

    cin.get();
    return 0;
}
#include <iostream>
using namespace std;

int fak(int n){
    if(n<=1) return 1;
        return n * fak(n-1);
}
int main(){    
    
    
    
    int n = 10;
    int hasil = fak(n);
    cout<<"hasil pangkat "<< n<<" adalah "<< hasil << endl;   
 
 return 0;
    
    
    
    
}
#include <iostream>
using namespace std;

struct NIGG{
    int DATA;
    NIGG *NEXT;
};
int main(){
    NIGG *n1 = new NIGG;
    n1->DATA=10;
    n1->NEXT=NULL;
    
    NIGG *n2 = new NIGG;
    n2->DATA=20;
    n2->NEXT=NULL;
    
    NIGG *n3 = new NIGG;
    n3->DATA=30;
    n3->NEXT=NULL;



    // ikat koneksi
    n1->NEXT=n2;
    n2->NEXT=n3;

    cout<< "node 1  "<<n1->DATA<<endl;
    cout<< "node 2  "<<n1->NEXT->DATA<<endl;
    cout<< "node 3  "<<n1->NEXT->NEXT->DATA<<endl;

    delete n1;
    delete n2;
    delete n3;

    return 0;
}
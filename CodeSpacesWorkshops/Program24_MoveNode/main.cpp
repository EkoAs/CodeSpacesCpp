#include <iostream>
using namespace std;


struct NODE{
    int DATA;
    NODE *NEXT;
};

int main(){
    // deklaraasis node awal
    NODE *node1= new NODE;
    node1 ->DATA=10;
    node1 ->NEXT=NULL;
    
    NODE *node2= new NODE;
    node2 ->DATA=20;
    node2 ->NEXT=NULL;
    
    //ikat dulu keduanya:
    node1->NEXT=node2;

    // baru pakai petunjuk
    NODE *petunjuk=node1;

    cout<<"node 1  "<<petunjuk->DATA<<endl;
    petunjuk=petunjuk ->NEXT;

    cout<<"node 2  "<<petunjuk->DATA<<endl;
    


    return 0;
}
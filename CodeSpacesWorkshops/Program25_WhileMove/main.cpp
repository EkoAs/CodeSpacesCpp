#include <iostream>
using namespace std;



struct NODE{
    int DATA;
    NODE *NEXT;
};

int main(){
    NODE *node1=new NODE;
    node1->DATA=10;
    node1->NEXT=NULL;
    
    NODE *node2=new NODE;
    node2->DATA=20;
    node2->NEXT=NULL;
    
    NODE *node3=new NODE;
    node3->DATA=30;
    node3->NEXT=NULL;
    
    NODE *node4=new NODE;
    node4->DATA=40;
    node4->NEXT=NULL;

    // proses kaitkan sesuai urutan
    node1->NEXT=node2;
    node2->NEXT=node3;
    node3->NEXT=node4;

    NODE *petunjuk=node1;
    int i = 0;
    // petunjuk dengan loop
    while(petunjuk != NULL){
        i+=1;
        cout<<" node ke "<<i<<" : "<<petunjuk->DATA<<endl;
        petunjuk=petunjuk->NEXT;
    }





    return 0;
}
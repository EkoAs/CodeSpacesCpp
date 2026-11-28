#include <iostream>
using namespace std;


struct NODE{
    int DATA;
    NODE *NEXT;
};

NODE *CREATE_NODE(int nilai){
    NODE *newN= new NODE;
    newN->DATA=nilai;
    newN->NEXT=NULL;
    return newN;
}

int main(){
    NODE *node1 = CREATE_NODE(10);
    NODE *node2 = CREATE_NODE(20);
    NODE *node3 = CREATE_NODE(30);


    // proses ikat node
    node1->NEXT=node2;
    node2->NEXT=node3;


    // menggunakan loop untuk menampilkan
    NODE *petunjuk=node1;
    int i=0;
    while(petunjuk!=NULL) {
        i+=1;
        cout<<"data ke "<<i<<" "<<petunjuk->DATA<<endl;
        petunjuk=petunjuk->NEXT;
    
    }

    cin.get();
    return 0;
}
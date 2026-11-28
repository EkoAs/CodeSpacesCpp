#include <iostream>
using namespace std;

struct NODE{
    int DATA;
    NODE *NEXT;
};

NODE *CREATE_N(int nilai){
    NODE *newNode = new NODE;
    newNode->DATA=nilai;
    newNode->NEXT=NULL;
    return newNode;
}

void showList(NODE *petunjuk){
    if(petunjuk==NULL){
        cout<<"belum ada apapun"<<endl;return;
    }
    while(petunjuk!=NULL){
        cout<<petunjuk->DATA<<endl;
        petunjuk=petunjuk->NEXT;
    }
    cout<<endl;
}



int main(){
    NODE *HEAD_N=NULL;
    showList(HEAD_N);
    
    NODE *node1 = CREATE_N(10);
    NODE *node2 = CREATE_N(20);
    NODE *node3 = CREATE_N(30);
    
    node1->NEXT=node2;
    node2->NEXT=node3;
    
    HEAD_N=node1;
    showList(HEAD_N);




    cin.get();
    return 0;
}
#include <iostream>
using namespace std;

struct NODE{
    int DATA;
    NODE *NEXT;
};
int main(){
    NODE *node1 = new NODE;
    node1 ->DATA=10;
    node1 ->NEXT=NULL;

    NODE *node2=new NODE;
    node2 ->DATA=20;
    node2 ->NEXT=NULL;

    //sambungkan bagian
    node1->NEXT=node2;


    cout << node1->DATA << endl;          // cetak DATA node1
    cout << node1->NEXT->DATA << endl;    // cetak DATA node yang ditunjuk NEXT node1

    delete node1;
    delete node2;
    return 0;
}
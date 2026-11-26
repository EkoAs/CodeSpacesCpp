#include <iostream>
using namespace std;

struct NODE{
    int DATA;
    NODE *NEXT;
};
int main(){
    NODE *node1 = new NODE; // minta memori untuk node1, alamat disimpan di memori satu
    node1 ->DATA = 10; // isi bagian data (awal) dengan nilai 
    node1 ->NEXT = NULL; // isi bagian next dengan null (tanda sebagai node terakhir dan bisa di hapus)

    cout<<node1->DATA<<endl;

    delete(node1); // karena node1 ->next null jadi bisa llangsung di hapus
    return 0;
}
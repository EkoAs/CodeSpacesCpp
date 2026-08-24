#include <iostream>
using namespace std;



// nilainya fiks ddan kita yg menjabarkannya
enum warna {merah,putih,hitam,coklat = 5,kuning,biru}; // ini datanya ada 6
// kalo di = 5 sisa dibelaakangnya mengikuti. sebelumnya tetap
int main(){
    warna kain;
    kain = hitam; // data yg didalam
    cout << kain << endl; // jadi tau, si putih posisis nya ada di satu, juga yg lainnya
    // putih jadi keywordnya si enum

    if (kain == hitam){
        cout << "Warna kain hitam" << endl;
    }



    cin.get();
    return 0;
}
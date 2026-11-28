#include <iostream>
using namespace std;

struct PETA{
    string HARTA;
    PETA *LOKASI;
};

PETA *BUAT_PETA(string nilai){
    PETA *newPeta = new PETA;
    newPeta ->HARTA = nilai;
    newPeta ->LOKASI=NULL;
    return newPeta;
}

int main(){
    PETA *peta1 = BUAT_PETA("ke arah atas");
    PETA *peta2 = BUAT_PETA("belok ke kiri");
    PETA *peta3 = BUAT_PETA("Sampai");

    // ikat
    peta1->LOKASI=peta2;
    peta2->LOKASI=peta3;

    // loop
    PETA *petunjuk = peta1;
    int i=0;
    while(petunjuk!=NULL){
        cout<<"data ke "<<i<<" "<<petunjuk->LOKASI<<endl;
        petunjuk=petunjuk->LOKASI;
    }




    cin.get();
    return 0;
}
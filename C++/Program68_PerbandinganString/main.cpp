#include <iostream>
#include <string>
using namespace std;

int main(){
    // perbandingan menggunakan char
    // char kata[4] = {'u','c','u','p'};
    // if (kata == "ucup") tidak akan berhasil

    // makan gunakan perbandingan string
    string kata("ucup");
    if (kata == "ucup"){
        cout << "Halo Ucup";
    }

    //  menggunakan mainloop

    string inputs;

    while(true){
        cout << " MAsukan nama: ";
        cin >> inputs;
        if (inputs == "ucup"){
            cout << "halo ucup" << endl;
            break;
        }
        else{
            cout << "bukan ucup" << endl;
        }
    }


    cin.get();
    return 0;
}
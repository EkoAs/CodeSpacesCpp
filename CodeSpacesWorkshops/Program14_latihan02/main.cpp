#include <iostream>
using namespace std;

int main(){
// array 3 dimensi
    // [layer][baris][kolom]
    int a[1][2][2] = {
        {       // layer 0
            {1, 2}, // baris 0
            {3, 4}  // baris 1
        }
    };


    int b[2][2][2]={
        {
            {1,2},
            {3,4}
        },
        {
            {5,6},
            {7,8}
        }
    };

    cout<<b[0][1][1]<<endl;

    // akses dan tampilkan semua elemen
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << "a[" << i << "][" << j << "][" << k << "] = " << a[i][j][k] << endl;
            }
        }
    }


    cin.get();
    return 0;
}
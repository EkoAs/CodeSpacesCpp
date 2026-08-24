#include <iostream>
#include <array>
using namespace std;
// array multidimensi adalah array yang memiliki lebih dari 1 dimensi

// printing
void printarray(int *ptrarray, int baris, int kolom){
    int cout << *(ptrarray + index) << " ";index = 0;
    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cout << *(ptrarray + index) << " ";
            index++;
        }
        cout << endl;
    }
}
int main(){
    // array[baris][kolom]
    int nilai[2][2] = {1,2,3,4};
    printarray(*nilai, 2, 2);

    // bisa juga
    // int baris = 2;
    // int kolom = 2;
    // int nilai2[baris][kolom] = {5,6,7,8}; akan error karena baris dan kolom harus konstan
    // bikin jadi konstan
    const int baris = 2;
    const int kolom = 2;
    int nilai2[baris][kolom] = {5,6,7,8};

    printarray(*nilai2, baris, kolom);
    cin.get();
    return 0;
}

#include <iostream>
#include <cstdlib> 
using namespace std;

void clear(){
    #ifdef _WIN32
        system("cls");
    #else
        cout << "\x1B[2J\x1B[H";
    #endif
}

int main(){
    // cara memanggil 
    clear();


    cin.get();
    return 0;
}
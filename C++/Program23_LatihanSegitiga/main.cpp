#include <iostream>
#include <string>
using namespace std;
int main(){
    int n = 10;
    for (int x = 1; x <= n; x++){
        for (int a = 1; a < x; a++){
            cout << "'\'";
        }
        cout << endl;}



    cin.get();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;


int main(){
    string name[3] = {"Ucup","Rian","Dantok"};
    cout << &name[0] << endl;
    cout << &name[1] << endl;
    cout << &name[2] << endl;
    
    name[0] = "Curucup";
    cout << name[0] << endl;
    cout << endl;



    cin.get();
    return 0;
}
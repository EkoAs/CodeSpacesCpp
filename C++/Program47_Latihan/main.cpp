#include <iostream>
using namespace std;


int main(){
    int a,b,c;
    cout << "Masukan input : ";
    cin >> a;
    cout << "Masukan input : ";
    cin >> b;
    //memastikan input digit
    if (cin.fail()) {
        cout << "Input harus bilangan bulat positif." << endl;
        return false;
    }else{
        cout << a + b;
    }

    cin.get();
    return 0;
}

#include <iostream>
using namespace std;
    int main(){
        // if else statement
        int inputUser;
        cout << "Typing number betwen 1 - 10:" << " ";
        cin >> inputUser;
        if (inputUser < 1 || inputUser > 10) {
            cout << "Input is out of range. Please enter a number between 1 and 10." << endl;
        } else {
            cout << " select angain ";
        }
        cin.get();
        return 0;
    }
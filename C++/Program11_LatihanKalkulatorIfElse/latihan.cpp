#include <iostream>
using namespace std;
    int main(){
        
        cout << "Latihan Kalkulator IF ELSE" << endl;
        cout << endl;
        int userInput;
        int userInput1;
        string operatorInput;
        cout << "Masukan Angka Pertama: ";
        cin >> userInput;
        cout << "Masukan Angka Kedua: ";
        cin >> userInput1;
        cout << "Masukan Operator (+, -, *, /): ";
        cin >> operatorInput;
        cout << endl;
        if (operatorInput == "+"){
            int hasil;
            hasil = (userInput + userInput1);
            cout << userInput << " + " << userInput1 << " = " << hasil;
        } else if (operatorInput == "-"){
            int hasil;
            hasil = (userInput - userInput1);
            cout << userInput << " - " << userInput1 << " = " << hasil;
        } else if (operatorInput == "*" || operatorInput == "x"){
            int hasil;
            hasil = (userInput * userInput1);
            cout << userInput << " X " << userInput1 << " = " << hasil;
        } else if (operatorInput == "/" || operatorInput == ":"){
            int hasil;
            hasil = (userInput / userInput1);
            cout << userInput << " : " << userInput1 << " = " << hasil;
            
        } else {
            cout << "Operator is not valid";
        }
        cout << endl;
        cout << " end the program" << endl;

        

        cin.get();
        return 0;
    }
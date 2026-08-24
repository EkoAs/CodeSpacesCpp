#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void userFile(ofstream &myFile);

int main(){
    ofstream myFile;
    userFile(myFile);
    cin.get();
    return 0;
    
}

void userFile(ofstream &myFile){
    string user;
    while(true){
        cout << "Masukan kata apapun (s to exit): ";
        cin >> user;
        if(user == "s"){
            break;
        }else{
            myFile.open("data1.txt", ios::app);
            myFile << "\n" << user;
            myFile.close();
        }
    }
}
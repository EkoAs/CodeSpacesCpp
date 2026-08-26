#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int age;
    cout<<"enter name: ";
    cin >> name;
    cout << endl;
    cout << "enter age: ";
    cin >> age;

    cout<<"hello "<<name<<" you are "<<age<<" years old."<<endl;
    return 0;
}
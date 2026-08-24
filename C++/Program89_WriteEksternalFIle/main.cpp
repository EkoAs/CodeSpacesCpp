#include <iostream>
#include <fstream> // ke eksternal ada 3 anaknya. ofstrean output, ifstream input, fstream campuran keduanya
using namespace std;

int main(){
    //file eksterna writw
    //mode ada 3
    // ios::out = operasi output, default; 
    // ios::app == menuliskan pada akhir baris;
    // ios:trunc =  default> akan membuat file jika tidak ada, kalo oada akan di hapus, bikin baru;
    //cara nya sama


    ofstream myFile;
    myFile.open("data1.txt"); // jika file belum ada akan dibuatkan  . sama aja kayak ios out
    myFile << "Peenulisan pada data 1"; // data ter save ke ekstenal file
    //menimpa jika diganti inputnya
    myFile.close(); // habis open jangan lupa close.


    myFile.open("data2.txt", ios::out);
    myFile << "\n data 2";
    myFile.close();


    int a = 10;
    myFile.open("data3.txt", ios::app); // append add to end
    myFile << "\ntulisa data 3";
    myFile << "\n", a;
    myFile.close();




    cin.get();
    return 0;
}
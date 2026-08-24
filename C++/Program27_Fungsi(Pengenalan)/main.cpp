#include <iostream>
#include <cmath> 
using namespace std;

/*
library cmath : www.cppreference.com
sqrt(x) : untuk menghitung akar kuadrat
tan(x) : untuk menghitung tangen
sin(x) : untuk menghitung sinus
pow(x, y) : untuk menghitung x pangkat y
log10(x) : untuk menghitung logaritma basis 10
log(x) : untuk menghitung logaritma natural
fmod(x, y) : untuk menghitung sisa hasil bagi x dan y
floor(x) : untuk membulatkan x ke bawah
fabs(x) : untuk menghitung nilai mutlak dari x
exp(x) : untuk menghitung eksponen pangkat x
cos(x) : untuk menghitung cosinus dari x
ceil(x) : untuk membulatkan x ke atas
*/



int main(){
    int x;
    cout << "Masukan Input : ";
    cin >> x;

    double y = sqrt(x); // ini adalah fungsinya
    cout << "Akar dari " << x << " Adalah " << y << endl;


    cin.get();
    return 0;
}
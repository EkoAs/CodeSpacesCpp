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
    int x, y, op;
    cout << "Masukan Input : ";
    cin >> x;
    cout << "Masukan Input : ";
    cin >> y;
    
    cout <<"1. akar"<< endl;
    cout <<"2. exponen"<< endl;
    cout <<"3. cosinus"<< endl;
    cout <<"4. membulatan ke atas"<< endl;
    cout <<"5. nilai mutlak"<< endl;
    cout <<"6. pangkat"<< endl;
    cout <<"7. logaritma natural"<< endl;
    cout <<"8. logaritma basis 10"<< endl;
    cout << "Masukan pilihan : ";
    cin >> op;
    if (op == 1){
        cout << "Akar dari " << x << " Adalah : " << sqrt(x) << endl;
    } else if (op == 2){
        cout << "Exponen dari " << x << " Adalah : " << exp(x) << endl;
    } else if ( op == 3){
        cout << "cosinus dari " << x << " Adalah : " << cos(x) << endl;
    } else if (op == 4){
        cout << "membulatan ke atas dari " << x << " Adalah : " << ceil(x) << endl;
    } else if (op == 5){
        cout << "Nilai mutlak dari " << x << " Adalah : " << fabs(x) << endl;
    } else if (op == 6){
    
        double hasil = pow(x,y);
        cout << "Pangkat dari " << x << " " << y  << " Adalah : " << hasil << endl;
    } else if (op == 7){
        cout << "Logaritma natural dari " << x << " Adalah : " << log(x) << endl;
    } else if (op == 8){
        cout << "Logaritma basis 10 dari " << x << " Adalah : " << log10(x) << endl;
    } else {
        cout << "Pilih yang benar!";}







    cin.get();
    return 0;
}
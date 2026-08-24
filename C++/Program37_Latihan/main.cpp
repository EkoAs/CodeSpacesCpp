#include <iostream>
using namespace std;

double volume(double p=1, double l=1, double t=1);
void tampilan(double p, double l, double t);
int main(){
    double p,l,t,hasil;
    cout << "Masukan panjang: ";
    cin >> p;
    cout << "Masukan lebar: ";
    cin >> l;
    cout << "Masukan tinggi: ";
    cin >> t;
    tampilan(p,l,t);
    
    cin.get();
    return 0;
}
double volume(double p, double l, double t){
    return p*l*t;
}
void tampilan(double p, double l, double t){
    double hasil = volume(p,l,t);
    cout << "Hasilnya: " << hasil << endl;
}                                  
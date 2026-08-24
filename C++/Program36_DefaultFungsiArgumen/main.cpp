#include <iostream>
using namespace std;

// prototype
double volume(double p = 1, double l = 1, double t = 1); // = 1 jika nilai tak ada/ argumen kurang
// default argumen wajib di taruh di atas jika mengunakan prototye
int main(){
    cout << "Volume nya : " << volume(2,2,2) << endl;
    cout << "Volume nya : " << volume(2,2) << endl;
    cout << "Volume nya : " << volume(2) << endl;
    cout << "Volume nya : " << volume() << endl; // tanpa argumen

    cin.get();
    return 0;

}
double volume(double p,double l,double t){
    return p * l * t;
}
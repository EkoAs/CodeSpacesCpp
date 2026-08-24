#include <iostream>
#include <string>
using namespace std;
struct Engine {
    int cc;
    int hp;
    float torsi;
};

struct Wheels {
    string model;
    string type;
};

struct Color {
    string exterior;
    string interior;
};
struct Car {
    string merk;
    string model;
    Engine engine_car;  // deklarasi ulang si struct ENgine yg atas
    Wheels wheels;  // Nested struct
    Color color;    // Nested struct
};

int main() {
    Car myCar;
    cout << "Merek Mobil: ";
    getline(cin, myCar.merk);
    cout << "Model: ";
    getline(cin, myCar.model);
    cout << "Torsi CC: ";
    cin >> myCar.engine_car.cc;

    cout << "Horse Power: ";
    cin >> myCar.engine_car.hp;

    myCar.engine_car.torsi = myCar.engine_car.cc * 0.1;
    // Membersihkan buffer sebelum menggunakan getline lagi
    cin.ignore();

    cout << "Ban Model: ";
    getline(cin, myCar.wheels.model);
    cout << "Ban Type: ";
    getline(cin, myCar.wheels.type);
    cout << "Warna Eksterior: ";
    getline(cin, myCar.color.exterior);
    cout << "Warna Interior: ";
    getline(cin, myCar.color.interior);

   
    for(int i=0; i<=20; ++i){
        cout << '=';
    }
    cout<< endl;
    cout << "Car Merk: " << myCar.merk << endl;
    cout << "Car Model: " << myCar.model << endl;
    cout << "Engine CC: " << myCar.engine_car.cc << " cc" << endl;
    cout << "Engine HP: " << myCar.engine_car.hp << " hp" << endl;
    cout << "Engine Torsi: " << myCar.engine_car.torsi << " Nm" << endl;
    cout << "Wheels Model: " << myCar.wheels.model << endl;
    cout << "Wheels Type: " << myCar.wheels.type << endl;
    cout << "Exterior Color: " << myCar.color.exterior << endl;
    cout << "Interior Color: " << myCar.color.interior << endl;
    cout << "Torsi (Nm): " << myCar.engine_car.torsi << endl;

    return 0;
}

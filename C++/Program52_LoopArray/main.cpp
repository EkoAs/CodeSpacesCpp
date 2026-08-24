#include <iostream>
#include <array>
#include <cstdlib>
using namespace std;

int main(){
    int num;
    array<int,20> data;
    data.fill(0);
    array<int,20> data2;
    data2.fill(0);
    cout<<"masukan Jumlah: ";
    cin>>num;
    
    if (num < 20){
        for (int x = 0; x < 20; ++x){
            data[x] = (1+(rand() %20));
            cout << data[x] << "  ";
            
        }
        cout << endl << endl;
        for (int y = 0; y < 20; ++y){
            data2[y]= (1+(rand() %20));
            cout << data2[y] << "  ";
        }
        // menghitung jumlah nilai random yang sama
        int count = 0;
        for (int i = 0; i < 20; ++i) {
            if (data[i] == data2[i]) {
                cout << "Data yg sama : " << data[i] << " | " << data2[i] << endl;
                ++count;
            }
            int total = data[i] + data2[i];
            cout << "Total : " << total << endl;
        }
        cout << "\nJumlah nilai random yang sama pada indeks yang sama: " << count << endl;
        
    }

    cin.get();
    return 0;
}
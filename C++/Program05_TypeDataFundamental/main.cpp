// type data fundamental
#include <iostream>
#include <limits>
using namespace std;
    int main(){
        int a = 4; // 4 byte
        cout << sizeof(a) << " " << "byte" << " " << numeric_limits<int>::max() << endl;
        cout << numeric_limits<int>::min() << "\n" << endl;
        long b = 4; // 4/8 byte tergantung nilai
        cout << sizeof(b) << " " << "byte" << " " << numeric_limits<long>::max() << endl;
        cout << numeric_limits<long>::min() << endl;
        short c = 4;
        cout << sizeof(c) << " " << "byte" << " " << numeric_limits<short>::max() << endl;
        cout << numeric_limits<short>::min() << endl;
        unsigned int d = 4; // unsigned tidak bertanda
        cout << sizeof(d) << " " << "byte" << " " << numeric_limits<int>::max() << endl;
        cout << numeric_limits<int>::min() << "\n" << endl;

        int g = 2147483648; // berubah jadi minus
        cout << g << endl;
        // int k = -2147483649; // berubah jadi 2147483647 plus
        // cout << k << endl; // tapi di warning aja , tetap aman di run
        return 0;
    }
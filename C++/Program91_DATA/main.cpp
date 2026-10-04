// #include <iostream>
// using namespace std;

// class DATA {
//     int a, b,c;
// public: 
//     DATA(int aa, int bb) {
//         a = aa;
//         b = bb;
//     }

//     void Show() {
//         cout << "data dari nilai a "<<a<<endl;
//         cout << "data dari nilai b "<<b<<endl;
//     }

    
//     DATA operator+(DATA P) {
//         return DATA(a + P.a, b + P.b);
//     }
// };

// int main() {
//     DATA A(2, 3);
//     DATA B(5, 4);

//     A.Show();
//     cout << endl << endl;

//     B.Show();
//     cout << endl << endl;

//     DATA C = A + B;

//     C.Show();
//     return 0;
// }


#include <iostream>
using namespace std;



#define TEKS "aku nak C++"
class CONTOH {
    int X;
public:
    void SetX(int XX){
        X = XX;
    }
    int GetX(){
        return X;
    }
    int operator = (int nilai){
        X = nilai;
        return 1;
    }
};
int main(){
    cout<<TEKS<<endl;
    CONTOH A;
    // cout<<"Masukan sesuatu : ";
    // cin >> A;
    cout<<"INTINYA ";
    A = 10;
    cout << "nilai x adalah "<< A.GetX();
    return 0;

}
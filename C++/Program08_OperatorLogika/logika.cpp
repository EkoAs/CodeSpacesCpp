// operator logika and, or, not
// not = !
// and = &&
// or = ||

#include <iostream>
using namespace std;
    int main(){
        int a = 2;
        int b = 2;
        int c = 3;
        bool hasil;
        // not
        // true jadi false begitu sebaliknya
        hasil  = !(a==b);
        cout << a << " !== " << b << " " << " = " << hasil << endl;
        
        // and 
        hasil  = ((a==b) and (b==c));
        cout << a << " and " << b << " " << " = " << hasil << endl;
        cout << b << " and " << c << " " << " = " << hasil << endl;
        
        // or 
        hasil  = ((a==b) or (b==c));
        cout << a << " or " << b << " " << " = " << hasil << endl;
        cout << b << " or " << c << " " << " = " << hasil << endl;














        cin.get();
        return 0;
    }
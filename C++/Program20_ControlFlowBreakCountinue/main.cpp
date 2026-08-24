#include <iostream>
using namespace std;
int main(){
    // break
    for(int x=1;x<=10;x++){
        if(x==5){
            break;
        }
        cout<<x<<endl; // harusnya sampe sepuluh, tapi pas di lima di break, otomatis keluar dari loop
    }
    // contoh countinue
    for(int y=1;y<=10;y++){
        if(y==5){
            continue; // 5 nya gak dicetak karena y==5, otomatis loncat ke awal loop
        }
        cout<<y<<endl;
    }

    // untuk while
    int num = 1;
    while(num <= 10){
        if(num == 5){
            break; // keluar dari loop
        }
        num++; // increment dulu sebelum break, supaya tidak infinite loop
        cout << num << endl;
    }

    // contoh continue pada while
    while(num <= 10){
        num++; // wajib di atas break
        if(num == 5){
            continue;
        }
        cout << num << endl;
    }
    cout << "end the program";
    cin.get();
    return 0;
}
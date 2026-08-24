#include <iostream>
#include <array>
#include <algorithm>
#include <string>

using namespace std;
const size_t ukuran = 16;
void sortArrayPrint(array <int,ukuran> & numbers){
    for(int &a : numbers){
        cout << a << " ";
    }
    cout<<endl;
}

void sortArrayPrint(array <char,ukuran> & numbers2){
    for(char &a : numbers2){
        cout << a << " ";
    }
    cout<<endl;
}

int main() {
    bool founds;
    int search_data;
    char search_data2;
    string types;

    array <int, ukuran> numbers = {1,2,5,8,0,2,9,4,3,2,1,2,3,2,2,3};
    sort(numbers.begin(), numbers.end());
    sortArrayPrint(numbers);
    
    array <char, ukuran> numbers2 = {'w','q','e','r','t','y','u','i','o','p','a','s','d','f','g','h'};
    sort(numbers2.begin(), numbers2.end());
    sortArrayPrint(numbers2);

    cout << "search data: (int/char) ";
    cin >> types;
    if (types == "char"){
        cout << "Search data: ";
        cin >> search_data2;
        founds = binary_search(numbers2.begin(), numbers2.end(), search_data);
        for(char &a : numbers2){
            if(a == search_data2){
                founds = true;
                break;
            } else {
                founds = false;
            }
        }
        if(founds){
            cout << "Data ditemukan" << endl;
        } else {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    
    cin.get();
    return 0;
}

// void inputindeks(){
//     int numbers;
//     for(int i=0; i<5;++i){
//         for(int j=0; j<5;++j){
//             cout<<"Masukan input: ";
//             cin >> numbers[i][j];
//         }
//     }
// }
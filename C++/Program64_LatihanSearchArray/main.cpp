#include <iostream>
#include <array>
using namespace std;

const size_t arraySize = 5;
const size_t colSize = 5;
int searchNum;

void inputArray(array<array<int, colSize>, arraySize>& num); // pakai reference
void printArray(const array<array<int, colSize>, arraySize>& num);
void searchEngine(const array<array<int, colSize>, arraySize>& num);

int main(){
    array<array<int, colSize>, arraySize> num;
    inputArray(num);
    cout << "Array elements:\n";
    printArray(num);
    searchEngine(num);

    cin.get();
    return 0;
}

void inputArray(array<array<int, colSize>, arraySize>& num){
    for (size_t i = 0; i < arraySize; ++i){
        for (size_t j = 0; j < colSize; ++j){
            cout << "Masukkan Nilai [" << i << "][" << j << "]: ";
            cin >> num[i][j];
        }
    }
}

void printArray(const array<array<int, colSize>, arraySize>& num){
    for (size_t i = 0; i < arraySize; ++i){
        for (size_t j = 0; j < colSize; ++j){
            cout << num[i][j] << " ";
        }
        cout << endl;
    }
}

void searchEngine(const array<array<int, colSize>, arraySize>& num){
    cout << "Masukkan angka yang dicari: ";
    cin >> searchNum;
    bool found = false;
    for (size_t i = 0; i < arraySize; ++i){
        for (size_t j = 0; j < colSize; ++j){
            if (num[i][j] == searchNum){
                cout << "Angka " << searchNum << " ditemukan pada indeks [" << i << "][" << j << "]" << endl;
                found = true;
                return;
            }
        }
    }
    if (!found){
        cout << "Angka " << searchNum << " tidak ditemukan dalam array." << endl;
    }
}

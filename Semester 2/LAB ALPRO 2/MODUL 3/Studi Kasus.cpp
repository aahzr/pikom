#include <iostream>
using namespace std;

void selectionSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        string temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    int size = 5;
    int count = 0;
    string *arr = new string[size];
    
    cout << "Masukkan Elemen Array (tekan Enter untuk selesai): " << endl;
    string elemen;
    while (getline(cin, elemen)) {
        if (elemen.empty())
            break;
        
        if (count == size) {
            size *= 2;
            string *tempArr = new string[size];
            for (int i = 0; i < count; i++) {
                tempArr[i] = arr[i];
            }
            delete[] arr;
            arr = tempArr;
        }
        arr[count++] = elemen;
    }

    selectionSort(arr, count);

    cout << "Array Setelah Diurutkan: " << endl;
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}


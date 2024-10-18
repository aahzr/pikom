#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int nilaiMinimal(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] > arr[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return arr[left];
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << endl;
    
    bubbleSort(arr, n);

    cout << "Array yang diinput: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Nilai minimum yang ditemukan: " << nilaiMinimal(arr, n) << endl;

    delete[] arr;

    return 0;
}


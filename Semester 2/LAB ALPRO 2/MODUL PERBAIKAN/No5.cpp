#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int value) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (arr[middle] == value)
            return middle;
        if (arr[middle] < value)
            left = middle + 1;
        else
            right = middle - 1;
    }
    return -1;
}

int main() {
    int n, value;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n); // Mengurutkan array

    cout << "Array setelah diurutkan secara menaik: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> value;

    int result = binarySearch(arr, n, value);
    if (result != -1)
        cout << "Nilai ditemukan pada indeks: " << result << endl;
    else
        cout << "Nilai tidak ditemukan." << endl;

    return 0;
}


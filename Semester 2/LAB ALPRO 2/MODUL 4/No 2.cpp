#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r, int &perbandingan, int &pertukaran, char aturan) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        perbandingan++;
        if ((aturan == 'a' && L[i] <= R[j]) || (aturan == 'b' && L[i] >= R[j])) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
        pertukaran++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
        pertukaran++;
    }
}

void mergeSort(int arr[], int l, int r, int &perbandingan, int &pertukaran, char aturan) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m, perbandingan, pertukaran, aturan);
        mergeSort(arr, m + 1, r, perbandingan, pertukaran, aturan);

        merge(arr, l, m, r, perbandingan, pertukaran, aturan);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n, perbandingan = 0, pertukaran = 0;
    char aturan;
    
    cout << "Masukkan Jumlah Data: ";
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cout << "Masukkan Data Ke-" << i+1 << "   : ";
        cin >> arr[i];
    }
    cout << endl;
    
    cout << "Aturan" << endl;
    cout << "a. Ascending" << endl;
    cout << "b. Descending" << endl;
    cout << "Pilih Aturan: ";
    cin >> aturan;
    cout << endl;
    
    cout << "Array sebelum diurutkan: ";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1, perbandingan, pertukaran, aturan);

    cout << "Array setelah diurutkan: ";
    printArray(arr, n);
    cout << endl;

    cout << "Jumlah perbandingan: " << perbandingan << endl;
    cout << "Jumlah pertukaran  : " << pertukaran << endl;

    return 0;
}

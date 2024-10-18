#include <iostream>

using namespace std;

void insertionSort(int arr[], int n, bool ascending) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && (ascending ? arr[j] > key : arr[j] < key)) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void merge(int arr[], int l, int m, int r, bool ascending) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int i = 0; i < n2; i++) R[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (ascending ? L[i] <= R[j] : L[i] >= R[j]) {
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
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r, bool ascending) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m, ascending);
        mergeSort(arr, m + 1, r, ascending);
        merge(arr, l, m, r, ascending);
    }
}

int partition(int arr[], int low, int high, bool ascending) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (ascending ? arr[j] <= pivot : arr[j] >= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high, bool ascending) {
    if (low < high) {
        int pi = partition(arr, low, high, ascending);
        quickSort(arr, low, pi - 1, ascending);
        quickSort(arr, pi + 1, high, ascending);
    }
}

int main() {
    int n, choice;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl;

    cout << "Pilih metode pengurutan: "<< endl;
	cout << "1. Insertion Sort" << endl;
	cout << "2. Merge Sort" << endl;
	cout << "3. Quick Sort" << endl;
	cout << "Pilihan: ";
    cin >> choice;
    cout << endl;

    cout << "Pilih urutan: " << endl;
	cout << "1. Ascending" << endl;
	cout << "2. Descending" << endl;
	cout << "Pilihan: ";
    int order;
    cin >> order;
    bool ascending = (order == 1);

    switch (choice) {
        case 1:
            insertionSort(arr, n, ascending);
            break;
        case 2:
            mergeSort(arr, 0, n - 1, ascending);
            break;
        case 3:
            quickSort(arr, 0, n - 1, ascending);
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            return 1;
    }

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


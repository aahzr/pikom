#include <iostream>
using namespace std;

void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

int partition(string arr[], int low, int high) {
    string pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void iterativeQuickSort(string arr[], int low, int high) {
    int stack[high - low + 1];
    int top = -1;

    stack[++top] = low;
    stack[++top] = high;

    while (top >= 0) {
        high = stack[top--];
        low = stack[top--];

        int p = partition(arr, low, high);
        if (p - 1 > low) {
            stack[++top] = low;
            stack[++top] = p - 1;
        }

        if (p + 1 < high) {
            stack[++top] = p + 1;
            stack[++top] = high;
        }
    }
}

void recursiveQuickSort(string arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);

        recursiveQuickSort(arr, low, p - 1);
        recursiveQuickSort(arr, p + 1, high);
    }
}

void printArray(string arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan Jumlah Array      : ";
    cin >> n;

    string arr[n];

    for (int i = 0; i < n; i++) {
    	cout << "Masukkan Elemen Array ke-" << i+1 << " : ";
        cin >> arr[i];
    }

	cout << endl;
    char metode;
    cout << "Metode" << endl;
    cout << "a. Iterative" << endl;
    cout << "b. Rekursif" << endl;
    cout << "Pilih Metode: ";
    cin >> metode;
    cout << endl;

    char aturan;
    cout << "Aturan" << endl;
    cout << "a. Ascending" << endl;
    cout << "b. Descending" << endl;
    cout << "Pilih Aturan: ";
    cin >> aturan;
    cout << endl;

    if (metode == 'a') {
        cout << "Sorting ";
        if (aturan == 'a') {
            cout << "Sorting Ascending dengan Iterative Quick Sort" << endl;
            iterativeQuickSort(arr, 0, n - 1);
        } else if (aturan == 'b') {
            cout << "Sorting Descending dengan Iterative Quick Sort" << endl;
            iterativeQuickSort(arr, 0, n - 1);
            for (int i = 0; i < n / 2; i++) {
                swap(arr[i], arr[n - i - 1]);
            }
        } else {
            cout << "Pilihan Tidak Valid" << endl;
            return 0;
        }
    } else if (metode == 'b') {
        cout << "Sorting ";
        if (aturan == 'a') {
            cout << "Shorting Ascending dengan Rekursif Quick Sort" << endl;
            recursiveQuickSort(arr, 0, n - 1);
        } else if (aturan == 'b') {
            cout << "Shorting Descending dengan Rekursif Quick Sort" << endl;
            recursiveQuickSort(arr, 0, n - 1);
            for (int i = 0; i < n / 2; i++) {
                swap(arr[i], arr[n - i - 1]);
            }
        } else {
            cout << "Pilihan Tidak Valid" << endl;
            return 0;
        }
    } else {
        cout << "Pilihan Tidak Valid" << endl;
        return 0;
    }

    printArray(arr, n);

    return 0;
}

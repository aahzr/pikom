#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int comparisons = 0, swaps = 0;
    bool swapped;
    cout << "Proses Bubble Sort" << endl;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
                swaps++;
            }
        }
        if (!swapped) {
            break;
        }
        cout << "Iterasi " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << "[" << arr[k] << "]"<< " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Data yang telah diurutkan: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Jumlah perbandingan: " << comparisons << endl;
    cout << "Jumlah pertukaran: " << swaps << endl;
}

int main() {
    int n;
    cout << "Masukkan jumlah data = ";
    cin >> n;
    cout << endl;

    int arr[n];
    for (int i = 0; i < n; i++) {
    	cout << "Masukkan data ke-" << i+1 << " = ";
        cin >> arr[i];
    }
    cout << endl;

    bubbleSort(arr, n);

    return 0;
}


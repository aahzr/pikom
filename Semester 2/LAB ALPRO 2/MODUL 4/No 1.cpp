#include <iostream>
using namespace std;

void insertionSort(int arr[], int n, int &perbandingan, int &pertukaran, char aturan) {
	perbandingan = 0;
	pertukaran = 0;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        int z=0;
        
        while (aturan == 'a' && j >= 0 && arr[j] > key || aturan == 'b' && j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
            perbandingan++;
            pertukaran++;
            z++;
        }
        
        if (z==0) {
        	perbandingan++;
		}
		
    arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
	int n, perbandingan, pertukaran;
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

	insertionSort(arr, n, perbandingan, pertukaran, aturan);

	cout << "Array setelah diurutkan: ";
    printArray(arr, n);
    cout << endl;

    cout << "Jumlah perbandingan: " << perbandingan << endl;
    cout << "Jumlah pertukaran  : " << pertukaran << endl;

    return 0;
}

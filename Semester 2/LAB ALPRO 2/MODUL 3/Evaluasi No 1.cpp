#include <iostream>
using namespace std;

void selectionSort(int arr[], int n, int comparisons, int swaps) {
	for (int i=0; i<n-1; i++) {
		int min_index = i;
		for (int j = i+1; j<n; j++) {
			if (arr[j] < arr[min_index]) {
				min_index = j;
						
			}
		comparisons++;
		}
		if (min_index != i) {
			int temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
			swaps++;
		}
	}
	cout << "Sorted array: ";
	for (int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	
	cout << endl;
	
	cout << "Number of comparisons: " << comparisons << endl;
	cout << "Number of swaps: " << swaps << endl;
}

int main() {
	int arr[]= {10, 5, 8, 3, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout << "[10, 5, 8, 3, 2]" << endl;
	
	selectionSort(arr, n, 0, 0);
	
	return 0;
}

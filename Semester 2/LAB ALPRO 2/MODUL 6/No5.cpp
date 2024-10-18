#include <iostream>
using namespace std;

int main() {
    int arr1[5] = {3, 6, 7, 8, 6};
    int arr2[5] = {4, 2, 1, 9, 5};
    int result[5];
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    int *ptrResult = result;

    for(int i = 0; i < 5; i++) {
        *(ptrResult + i) = *(ptr1 + i) * *(ptr2 + i);
    }

    for(int i = 0; i < 5; i++) {
        cout << "Hasil elemen " << i << ": " << *(ptrResult + i) << endl;
    }

    return 0;
}


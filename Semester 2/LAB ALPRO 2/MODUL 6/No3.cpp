#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;

    cout << "Sebelum swap: a = " << a << "," << " b = " << b << endl;
    swap(&a, &b);
    cout << "Sesudah swap: a = " << a << "," << " b = " << b << endl;

    return 0;
}


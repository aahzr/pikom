#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung dan menampilkan bilangan Fibonacci
void fibonacci(int n, int a = 0, int b = 1) {
    if (a <= n) {
        cout << a << " ";
        fibonacci(n, b, a + b);
    }
}

int main() {
    int batas;
    cout << "Masukkan batas nilai Fibonacci: ";
    cin >> batas;

    cout << "Deret Fibonacci hingga mencapai atau melampaui " << batas << ": ";
    fibonacci(batas);

    cout << endl;

    return 0;
}


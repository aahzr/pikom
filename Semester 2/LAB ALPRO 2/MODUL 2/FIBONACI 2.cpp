#include <iostream>
using namespace std;

int fibonacci(int n, int a = 1, int b = 1) {
    if (a > n) {
    	return 0;
	}else {
        cout << a << " ";
        fibonacci(n, b, a + b);
	}
}
int main() {
	int batas;
	cout << "Masukkan Nilai Batas : "; cin >> batas;
	fibonacci(batas);
	return 0;
}

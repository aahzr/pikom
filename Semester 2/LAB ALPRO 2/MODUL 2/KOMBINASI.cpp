#include <iostream>
using namespace std;

int kombinasi(int n, int r) {
    if (r == 0 || r == n) {
    	return 1;
    }else {
        return kombinasi(n - 1, r - 1) + kombinasi(n - 1, r);
    }
}

int main() {
    int n, r;
    cout << "Masukkan Nilai n : "; cin >> n;
    cout << "Masukkan Nilai r : "; cin >> r;

    if (n < 0 || r < 0 || r > n) {
        cout << "Input tidak valid!" << endl;
    } else {
        cout << "Nilai Kombinasi C(" << n << "," << r << ") adalah: " << kombinasi(n, r) << endl;
    }
    return 0;
}


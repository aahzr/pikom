#include <iostream>
using namespace std;

int main () {
    int ukuran, i, j;
    cout << "Masukkan Ukuran : ";
    cin >> ukuran;

    for (i = 1; i <= ukuran; i++) {
        for (j = 1; j <= i; j++) { // kalau ini terputus atau false maka akan kembali ke nilai awal yaiut j = 1
            if (j == 1 || j == i || i == ukuran) {
                cout << "* ";
        }   else {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}

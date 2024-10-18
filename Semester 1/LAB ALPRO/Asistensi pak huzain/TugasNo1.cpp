#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int angka;

	for (int j = 1; j == 1;){
    cout << "Masukkan Angka: ";
    cin >> angka;

    if (angka < 2) {
        cout << angka << " Bukan bilangan prima" << endl << endl;
    }else {
        bool prima = true;
        int batas = sqrt(angka);
        for (int i = 2; i <= batas; ++i) {
            if (angka % i == 0) {
                prima = false;
                break;
            }
        }

        if (prima) {
            cout << angka << " Merupakan bilangan prima" << endl << endl;
        }else {
            cout << angka << " Bukan bilangan prima" << endl << endl;
        }
    }
}
    return 0;
}

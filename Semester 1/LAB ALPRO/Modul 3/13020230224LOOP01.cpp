#include <iostream>
using namespace std;

int main () {
    int ukuran, i, j;
    cout << "Masukkan Ukuran : ";
    cin >> ukuran;

    i = 1;
    while(i <= ukuran) { 
        j = 1;
        while (j <= i) { // nilai i atau j tidak akan berubah selama tidak melewati baris nilai aslinya
            cout << "* "; // atau dapat dikatakan tidak terjadi reset nilai
            j++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}
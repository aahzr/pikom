#include <iostream>

using namespace std;

void tampilkanAlamatIsi(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Alamat: " << (arr + i) << " Isi: " << arr[i] << endl;
    }
}

void kalikanArray(int* arr1, int* arr2, int* hasil, int n) {
    for (int i = 0; i < n; i++) {
        hasil[i] = arr1[i] * arr2[i];
    }
}

int main() {
    int n, pilihan;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int* arr1 = new int[n];
    int* arr2 = new int[n];
    int* hasil = new int[n];

    cout << "Masukkan elemen array pertama: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Masukkan elemen array kedua: ";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    cout << "Pilih operasi:\n1. Tampilkan alamat memori dan isi\n2. Kalikan dua array\nPilihan: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Array pertama:" << endl;
            tampilkanAlamatIsi(arr1, n);
            cout << "Array kedua:" << endl;
            tampilkanAlamatIsi(arr2, n);
            break;
        case 2:
            kalikanArray(arr1, arr2, hasil, n);
            cout << "Hasil perkalian kedua array: ";
            for (int i = 0; i < n; i++) {
                cout << hasil[i] << " ";
            }
            cout << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    delete[] arr1;
    delete[] arr2;
    delete[] hasil;

    return 0;
}


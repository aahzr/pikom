#include <iostream>
using namespace std;

int main() {
    string nama, nim;
    int semester;

    cout << "Masukkan Nama Mahasiswa    : ";
    getline(cin, nama);

    cout << "Masukkan NIM               : ";
    getline(cin, nim);

    cout << "Masukkan Semester          : ";
    cin >> semester;

    int jumlahMatkul;

    cout << "Masukkan Jumlah Mata Kuliah: ";
    cin >> jumlahMatkul;

    string matkul[jumlahMatkul];
    int sks[jumlahMatkul];
    string indeks[jumlahMatkul];
    float mutu[jumlahMatkul];

    for (int i = 0; i < jumlahMatkul; i++) {
        cout << "\nMasukkan Nama Mata Kuliah ke-" << i + 1 << ": ";
        cin.ignore();
        getline(cin, matkul[i]);

        cout << "Masukkan SKS untuk " << matkul[i] << ": ";
        cin >> sks[i];

        cout << "Masukkan Indeks untuk " << matkul[i] << ": ";
        cin >> indeks[i];

        cout << "Masukkan Mutu untuk " << matkul[i] << ": ";
        cin >> mutu[i];
    }

    cout << "\n===========================================\n";
    cout << "          Data Mahasiswa\n";
    cout << "===========================================\n";
    cout << "Nama      : " << nama << endl;
    cout << "NIM       : " << nim << endl;
    cout << "Semester  : " << semester << endl;
    cout << "-------------------------------------------\n";
    cout << "No.  Mata Kuliah        SKS  Indeks  Mutu\n";
    cout << "-------------------------------------------\n";

    for (int i = 0; i < jumlahMatkul; i++) {
        cout << i + 1 << ". " 
             << matkul[i] << "   " 
             << sks[i] << "     " 
             << indeks[i] << "     " 
             << mutu[i] << endl;
    }

    cout << "===========================================\n";

    return 0;
}


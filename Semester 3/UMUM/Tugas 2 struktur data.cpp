#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string kelas;
    int semester;
    string fakultas;
    string jurusan;
    string alamat;
    string telepon;
    string email;
    int umur;
};

int main() {
    Mahasiswa mhs[3];

    for (int i = 0; i < 3; i++) {
        cout << "Masukkan Data Mahasiswa ke-" << i + 1 << endl;

        cout << "Masukkan Nama Mahasiswa    : ";
        getline(cin, mhs[i].nama);

        cout << "Masukkan NIM               : ";
        getline(cin, mhs[i].nim);

        cout << "Masukkan Kelas             : ";
        getline(cin, mhs[i].kelas);

        cout << "Masukkan Semester          : ";
        cin >> mhs[i].semester;
        cin.ignore();

        cout << "Masukkan Fakultas          : ";
        getline(cin, mhs[i].fakultas);

        cout << "Masukkan Jurusan           : ";
        getline(cin, mhs[i].jurusan);

        cout << "Masukkan Alamat            : ";
        getline(cin, mhs[i].alamat);

        cout << "Masukkan Telepon           : ";
        getline(cin, mhs[i].telepon);

        cout << "Masukkan Email             : ";
        getline(cin, mhs[i].email);

        cout << "Masukkan Umur              : ";
        cin >> mhs[i].umur;
        cin.ignore();

        cout << endl;
    }

    cout << "\n===========================================\n";
    cout << "          Data Mahasiswa\n";
    cout << "===========================================\n";

    for (int i = 0; i < 3; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama      : " << mhs[i].nama << endl;
        cout << "NIM       : " << mhs[i].nim << endl;
        cout << "Kelas     : " << mhs[i].kelas << endl;
        cout << "Semester  : " << mhs[i].semester << endl;
        cout << "Fakultas  : " << mhs[i].fakultas << endl;
        cout << "Jurusan   : " << mhs[i].jurusan << endl;
        cout << "Alamat    : " << mhs[i].alamat << endl;
        cout << "Telepon   : " << mhs[i].telepon << endl;
        cout << "Email     : " << mhs[i].email << endl;
        cout << "Umur      : " << mhs[i].umur << endl;
        cout << "-------------------------------------------\n";
    }

    return 0;
}


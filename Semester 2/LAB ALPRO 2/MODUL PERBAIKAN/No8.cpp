#include <iostream>
#include <vector>

using namespace std;

class Karyawan {
private:
    int id;
    string nama;
    string departemen;
    float gaji;

public:
    void setData(int i, string n, string d, float g) {
        id = i;
        nama = n;
        departemen = d;
        gaji = g;
    }

    int getId() { return id; }
    string getNama() { return nama; }
    string getDepartemen() { return departemen; }
    float getGaji() { return gaji; }

    void tampilkanData() {
        cout << "ID: " << id << ", Nama: " << nama << ", Departemen: " << departemen << ", Gaji: " << gaji << endl;
    }
};

int main() {
    vector<Karyawan> daftarKaryawan;
    int pilihan;

    do {
        cout << "Menu:\n1. Input Data\n2. Tampil Data\n3. Cari Data\n4. Hapus Data\n5. Keluar\nPilihan: ";
        cin >> pilihan;

        if (pilihan == 1) {
            Karyawan k;
            int id;
            string nama, departemen;
            float gaji;
            cout << "Masukkan ID: ";
            cin >> id;
            cout << "Masukkan Nama: ";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan Departemen: ";
            getline(cin, departemen);
            cout << "Masukkan Gaji: ";
            cin >> gaji;
            k.setData(id, nama, departemen, gaji);
            daftarKaryawan.push_back(k);
            cout << endl;
        } else if (pilihan == 2) {
            cout << endl;
            for (vector<Karyawan>::iterator it = daftarKaryawan.begin(); it != daftarKaryawan.end(); ++it) {
                it->tampilkanData();
            }
            cout << endl;
        } else if (pilihan == 3) {
            int id;
            cout << "Masukkan ID yang ingin dicari: ";
            cin >> id;
            bool ditemukan = false;
            cout << endl;
            for (vector<Karyawan>::iterator it = daftarKaryawan.begin(); it != daftarKaryawan.end(); ++it) {
                if (it->getId() == id) {
                    it->tampilkanData();
                    ditemukan = true;
                    break;
                }
            }
            if (!ditemukan) {
                cout << "Data tidak ditemukan." << endl;
            }
            cout << endl;
        } else if (pilihan == 4) {
            int id;
            cout << "Masukkan ID yang ingin dihapus: ";
            cin >> id;
            cout << endl;
            for (vector<Karyawan>::iterator it = daftarKaryawan.begin(); it != daftarKaryawan.end(); ++it) {
                if (it->getId() == id) {
                    daftarKaryawan.erase(it);
                    cout << "Data berhasil dihapus." << endl;
                    break;
                }
            }
            cout << endl;
        } else if (pilihan != 5) {
            cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 5);

    return 0;
}


#include <iostream>
#include <vector>
using namespace std;

class Barang {
public:
    string nama;
    double harga;
    int stok;

    Barang(string n, double h, int s) : nama(n), harga(h), stok(s) {}
};

void tambahBarang(vector<Barang>& daftarBarang) {
    string nama;
    double harga;
    int stok;
    cout << "Masukkan nama barang: ";
    cin >> ws; // Untuk membersihkan buffer sebelum mengambil input string
    getline(cin, nama);
    cout << "Masukkan harga barang: ";
    cin >> harga;
    cout << "Masukkan jumlah stok barang: ";
    cin >> stok;
    daftarBarang.push_back(Barang(nama, harga, stok));
    cout << "Barang berhasil ditambahkan!" << endl << endl;
}

void hapusBarang(vector<Barang>& daftarBarang) {
    string nama;
    cout << "Masukkan nama barang yang akan dihapus: ";
    cin >> ws; // Untuk membersihkan buffer sebelum mengambil input string
    getline(cin, nama);
    vector<Barang>::iterator it;
    for (it = daftarBarang.begin(); it != daftarBarang.end(); ++it) {
        if (it->nama == nama) {
            daftarBarang.erase(it);
            cout << "Barang berhasil dihapus!" << endl << endl;
            return;
        }
    }
    cout << "Barang tidak ditemukan!" << endl << endl;
}

void beliBarang(vector<Barang>& daftarBarang) {
    string nama;
    int jumlah;
    cout << "Masukkan nama barang yang akan dibeli: ";
    cin >> ws; // Untuk membersihkan buffer sebelum mengambil input string
    getline(cin, nama);
    cout << "Masukkan jumlah barang yang akan dibeli: ";
    cin >> jumlah;
    for (vector<Barang>::iterator it = daftarBarang.begin(); it != daftarBarang.end(); ++it) {
        if (it->nama == nama) {
            if (it->stok >= jumlah) {
                it->stok -= jumlah;
                cout << "Pembelian berhasil!" << endl << endl;
            } else {
                cout << "Stok tidak mencukupi!" << endl << endl;
            }
            return;
        }
    }
    cout << "Barang tidak ditemukan!" << endl << endl;
}

void tampilkanDaftarBarang(const vector<Barang>& daftarBarang) {
    cout << "\nDaftar Barang:" << endl;
    cout << "----------------------------------------" << endl;
    cout << "No. | Nama Barang | Harga   | Stok" << endl;
    cout << "----------------------------------------" << endl;
    int index = 1;
    for (vector<Barang>::const_iterator it = daftarBarang.begin(); it != daftarBarang.end(); ++it) {
        cout << index++ << ".  | " << it->nama << " | Rp" << it->harga << " | " << it->stok << endl;
    }
    cout << "----------------------------------------" << endl << endl;
}

int main() {
    vector<Barang> daftarBarang;
    int pilihan;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Tambah barang" << endl;
        cout << "2. Hapus barang" << endl;
        cout << "3. Beli barang" << endl;
        cout << "4. Tampilkan daftar barang" << endl;
        cout << "5. Selesai" << endl;
        cout << "Pilih: ";
        cin >> pilihan;
        cout << endl;

        switch (pilihan) {
            case 1:
                tambahBarang(daftarBarang);
                break;
            case 2:
                hapusBarang(daftarBarang);
                break;
            case 3:
                beliBarang(daftarBarang);
                break;
            case 4:
                tampilkanDaftarBarang(daftarBarang);
                break;
            case 5:
                cout << "Program selesai." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid!" << endl << endl;
                break;
        }
    }
}


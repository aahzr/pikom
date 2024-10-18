#include <iostream>
using namespace std;

class Mobil {
private:
    string merk;
    int tahun_pembuatan;
    double harga;

public:
    Mobil(string m, int t, double h) : merk(m), tahun_pembuatan(t), harga(h) {}

    string getMerk() {
        return merk;
    }

    int getTahunPembuatan() {
        return tahun_pembuatan;
    }

    double getHarga() {
        return harga;
    }

    void setHarga(double h) {
        harga = h;
    }

    void tampilkanInformasi() {
        cout << "Mobil " << merk << ", tahun pembuatan " << tahun_pembuatan << ", harga Rp" << harga << endl;
    }
};

int main() {
    Mobil mobil1("Toyota", 2020, 200000000);
    Mobil mobil2("Honda", 2019, 180000000);
    Mobil mobil3("Mazda", 2022, 300000000);

    cout << "Informasi mobil:" << endl;
    mobil1.tampilkanInformasi();
    mobil2.tampilkanInformasi();
    mobil3.tampilkanInformasi();

    return 0;
}


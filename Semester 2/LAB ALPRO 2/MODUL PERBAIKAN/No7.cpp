#include <iostream>
#define PI 3.14

using namespace std;

class Tabung {
private:
    float jari_jari;
    float tinggi;

public:
    void setData(float r, float t) {
        jari_jari = r;
        tinggi = t;
    }

    float hitungLuasPermukaan() {
        return 2 * PI * jari_jari * (jari_jari + tinggi);
    }

    float hitungKelilingLingkaran() {
        return 2 * PI * jari_jari;
    }
};

int main() {
    Tabung tabung;
    float r, t;
    char pilihan;

    do {
        cout << "Masukkan jari-jari: ";
        cin >> r;
        cout << "Masukkan tinggi: ";
        cin >> t;

        tabung.setData(r, t);

        cout << "Luas permukaan tabung: " << tabung.hitungLuasPermukaan() << endl;
        cout << "Keliling lingkaran alas: " << tabung.hitungKelilingLingkaran() << endl;

        cout << "Apakah ingin mengulang program? (y/n): ";
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'Y');

    return 0;
}


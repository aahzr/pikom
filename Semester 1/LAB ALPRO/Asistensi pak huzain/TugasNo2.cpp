#include <iostream>
using namespace std;

int main() {
	int usia;
	char izin;
	
	cout << "=== Selamat Datang di Tempat Hiburan ===" << endl;
	cout << "Masukkan Usia Anda: ";
	cin >> usia;
	cout << "Apakah Anda diizinkan oleh Orang Tua Anda ? [y/n]: ";
	cin >> izin;
	
	if (usia >= 18 && (izin == 'y' || izin == 'Y')) {
		cout << "=== Selamat Anda dibolehkan Masuk ===" << endl;
	}else {
		cout << "Mohon Maaf Anda Belum diperbolehkan Masuk" << endl;
	}
	return 0;
}

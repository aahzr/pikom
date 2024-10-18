#include <iostream>
using namespace std;

int main() {
	int sisi, panjang, lebar, jari, pilihan;
	float luas, keliling;
	
	cout << "Hitung Luas dan Keliling Bangun Datar" << endl;
	cout << "=====================================" << endl;
	cout << endl;
	cout << "1. Persegi" << endl;
	cout << "2. Persegi Panjang" << endl;
	cout << "3. Lingkaran" << endl;
	
	cout << "Masukkan pilihan (1..3) : ";
	cin >> pilihan;
	
	system("cls");
	
	switch (pilihan) {
		case 1:
			cout << "Bangun Datar Persegi" << endl << endl;
			cout << "Masukkan ukuran sisi: ";
			cin >> sisi;
			cout << endl;
			cout << "1. Hitung Luas" << endl;
			cout << "2. Hitung Keliling" << endl;
			cout << "3. Hitung Luas dan Keliling" << endl;
			cout << "Masukkan Pilihan (1..3) : ";
			cin >> pilihan;
			cout << endl;
			
			luas = sisi*sisi;
			keliling = 4*sisi;
			
			switch (pilihan) {
				case 1:
					cout << "Luas = " << luas;
					break;
				case 2:
					cout << "Keliling = " << keliling;
					break;
				case 3:
					cout << "Luas 	 = " << luas << endl;
					cout << "Keliling = " << keliling << endl;
					break;
				default:
					cout << "Pilihan Tidak Ada" << endl;
				return 0;
			}
			break;
		case 2:
			cout << "Bangun Datar Persegi Panjang" << endl << endl;
			cout << "Masukkan ukuran panjang: ";
			cin >> panjang;
			cout << "Masukkan ukuran lebar: ";
			cin >> lebar;
			cout << endl;
			cout << "1. Hitunglah Luas" << endl;
			cout << "2. Hitunglah Keliling" << endl;
			cout << "3. Hitunglah Luas dan Keliling" << endl;
			cout << "Masukkan Pilihan (1..3) : ";
			cin >> pilihan;
			cout << endl;
			
			luas = panjang*lebar;
			keliling = (2*panjang) + (2*lebar);
			
			switch (pilihan) {
				case 1:
					cout << "Luas = " << luas;
					break;
				case 2:
					cout << "Keliling = " << keliling;
					break;
				case 3:
					cout << "Luas 	 = " << luas << endl;
					cout << "Keliling = " << keliling << endl;
					break;
				default:
					cout << "Pilihan Tidak Ada" << endl;
				return 0;
			}
			break;
		case 3:
			cout << "Bangun Datar Lingkaran" << endl << endl;
			cout << "Masukkan ukuran jari-jari: ";
			cin >> jari;
			cout << endl;
			cout << "1. Hitunglah Luas" << endl;
			cout << "2. Hitunglah Keliling" << endl;
			cout << "3. Hitunglah Luas dan Keliling" << endl;
			cout << "Masukkan Pilihan (1..3) : ";
			cin >> pilihan;
			cout << endl;
			
			luas = 3.14*jari*jari;
			keliling = 2*3.14*jari;
			
			switch (pilihan) {
				case 1:
					cout << "Luas = " << luas;
					break;
				case 2:
					cout << "Keliling = " << keliling;
					break;
				case 3:
					cout << "Luas 	 = " << luas << endl;
					cout << "Keliling = " << keliling << endl;
					break;
				default:
					cout << "Pilihan Tidak Ada" << endl;
				return 0;		
			}
			break;
		default:
			cout << "Pilihan Tidak Ada" << endl;
	}
	return 0;
}


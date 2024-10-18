#include<iostream>
using namespace std;

int main() {
    int tahun, umur;
    
    cout << "Masukkan tahun lahir: ";
    cin >> tahun;

	umur= 2023-tahun;
	
	cout << endl;
	cout << "Hasil:" << endl;
	cout << "Umur anda: " << umur << " tahun" << endl;
	cout << "Vaksin yang cocok:" << endl;
    
    if (umur >= 12) {
    	cout << "- Pfizer" << endl;
	}if (umur >= 18) {
		cout << "- Moderna" << endl << "- Sinovac" << endl;
	}if (umur >= 18 & umur <= 55) {
		cout << "- AstraZeneca" << endl;
	}if (umur >= 18 & umur <= 59) {
		cout << "- Novavax" << endl;
	}if (umur >= 18 & umur <= 80) {
		cout << "- Sinopharm" << endl;
	}if (umur < 12) {
		cout << "- Tidak ada vaksin yang cocok" << endl;
	}
	return 0;
}

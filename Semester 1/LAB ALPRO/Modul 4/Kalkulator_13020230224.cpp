#include <iostream>
using namespace std;

float tambah (float angka1, float angka2){
	float hasil = angka1+angka2;
	return hasil;
}

float kurang (float angka1, float angka2){
	float hasil = angka1-angka2;
	return hasil;
}

float kali (float angka1, float angka2){
	float hasil = angka1*angka2;
	return hasil;
}

float bagi (float angka1, float angka2){
	float hasil = angka1/angka2;
	return hasil;
}

int main () {
	float angka1, angka2, hasil, rp, i, j;
	string op;

	for (i = 0; rp = 1; i < rp) {
		cout << "=========KALKULATOR SEDERHANA=========" << endl;
		cout << "Anda Ingin Melakukan Apa [+|-|*|/|keluar]: ";
		cin >> op; 
		cout << endl;	

		if (op == "+" || op == "-" || op == "*" || op == "/"){
	 		rp = 2;
		}else if (op == "keluar" ) {
			return 0;
		}else {
			rp = 1; 
		}
		
		for (j = 2; j == rp; j++){
			cout << "Masukkan Nilai 1: ";
			cin >> angka1;
			cout << "Masukkan Nilai 2: ";
			cin >> angka2;
		
			if (op == "+") {
				cout << "Hasil= " << tambah (angka1, angka2) << endl;
			}else if (op == "-") {
				cout << "Hasil= " << kurang (angka1, angka2) << endl;
			}else if (op == "*") {
				cout << "Hasil= " << kali (angka1, angka2) << endl;
			}else if (op == "/") {
				cout << "Hasil= " << bagi (angka1, angka2) << endl;
			}
		cout << endl << "======================================" << endl << endl;
		}
	}
	return 0;
}

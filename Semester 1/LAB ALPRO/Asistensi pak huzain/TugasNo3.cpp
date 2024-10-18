#include <iostream>
using namespace std;

int main() {
	int nilai;
	char kelamin;
	cout << "Masukkan Nilai Ujian Anda        : ";
	cin >> nilai;
	cout << "Masukkan Jenis Kelamin Anda [L/P]: ";
	cin >> kelamin;
	
	if (nilai >= 60){
		cout << "Selamat Anda dinyatakan Lulus";
		if (nilai >= 80 && (kelamin == 'l' || kelamin == 'L')){
			cout << " dengan Nilai Tinggi" << endl;
		}else if (nilai >= 75 && (kelamin == 'p' || kelamin == 'P')){
			cout << " dengan Nilai Tinggi" << endl;
		}else {
			cout << " dengan Nilai Rendah" << endl;
		}
	}else {
		cout << "Maaf Anda dinyatakan Tidak Lulus" << endl;
	}
	return 0;
}

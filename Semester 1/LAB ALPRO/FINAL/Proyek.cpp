#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void MenuUtama () {
	cout << "===============================================" << endl;
	cout << "|             SELAMAT DATANG DI               |" << endl;
	cout << "|                 HEALTH PRO                  |" << endl;
	cout << "|  1. Kalkulator TDEE | 2. Kalkulator Kalori  |" << endl;
	cout << "===============================================" << endl;
}

void olahraga () {
	cout << "===============================================" << endl;
	cout << "OLAHRAGA YANG DIANJURKAN:" << endl << endl;
	cout << "Lompat Tali 30-40 Menit" << endl;
	cout << "Jogging 30-60 Menit" << endl;
	cout << "Bersepeda 30-80 Menit" << endl;
	cout << "Renang 20-40 Menit" << endl;
	cout << "Interval Traning 30-40 Menit" << endl;
	cout << "GYM 30-60 Menit" << endl;
	cout << "===============================================" << endl << endl;
}
int main() {
    char bmr_Again, gender;
    double weight, height, bmr, tdee, height_m, bmi, bmi1;
    int age, activityFactor, menu, pilihan_1, pilihan_2, password, durasi, klompat, kjogging, kbersepeda, krenang;
    string nama;
    
    float rumustdee[4] = {1.2, 1.375, 1.55, 1.725};

	cout << "===============================================" << endl;
	cout << "|             SELAMAT DATANG DI               |" << endl;
	cout << "|                 HEALTH PRO                  |" << endl;
	cout << "===============================================" << endl;
	
	cout << "========Silahkan Login Terlebih Dahulu=========" << endl;
	cout << "Masukkan Nama Anda: ";
	getline (cin, nama);
	cout << "Masukkan Password : ";
	cin >> password;
	system("cls");
	
	do {
	MenuUtama();
	cout << "Anda Ingin Menggunakan Apa ? [1/2]: ";
	cin >> menu;
	
	if (menu == 1) {
	system("cls");
	cout << "===============================================" << endl;
	cout << "|             SELAMAT DATANG DI               |" << endl;
	cout << "|                 HEALTH PRO                  |" << endl;
	cout << "|              KALKULATOR TDEE!               |" << endl;
	cout << "===============================================" << endl;
    cout << "Jenis Kelamin (L atau P)    : ";
    cin >> gender;
    
        while (gender != 'L' && gender != 'l' && gender != 'P' && gender != 'p') {
            cout << "Pilihan Tidak Valid. Input jenis kelamin (L/P): ";
            cin >> gender;
        }

        cout << "Berat Badan (kg)            : ";
        cin >> weight;
        cout << "Tinggi Badan (cm)           : ";
        cin >> height;
        cout << "Usia (tahun)                : ";
        cin >> age;
        
        cout << endl;
        cout << "Pilih Tingkat Aktivitas: " << endl;
        cout << "1. Sangat Sedikit Aktif (tidak berolahraga)\n";
        cout << "2. Sedikit Aktif (olahraga ringan 1-3 hari per minggu)\n";
        cout << "3. Aktif (olahraga sedang 3-5 hari per minggu)\n";
        cout << "4. Sangat Aktif (olahraga berat 6-7 hari per minggu)\n";
        cout << "Masukkan pilihan aktivitas (1-4): ";
        cin >> activityFactor;
		
        while (activityFactor < 1 || activityFactor > 4) {
            cout << "Pilihan tidak valid. Masukkan pilihan aktivitas (1-4): ";
            cin >> activityFactor;
        }

        if (gender == 'P' || gender == 'p') {
            bmr = 65.5 + (9.6 * weight) + (1.8 * height) - (4.7 * age);
        }else if (gender == 'L' || gender == 'l') {
            bmr = 66 + (13.7 * weight) + (5 * height) - (6.8 * age);
        }

        switch (activityFactor) {
            case 1:
                tdee = bmr * rumustdee[0];
                break;
            case 2:
                tdee = bmr * rumustdee[1];
                break;
            case 3:
                tdee = bmr * rumustdee[2];
                break;
            case 4:
                tdee = bmr * rumustdee[3];
                break;
        }
        
        height_m = height/100;
		bmi = weight / (height_m*height_m);
		
        cout << "\n===============================================\n";
        cout << "Kalori Harian (BMR) anda adalah = " << fixed << setprecision(2) << bmr << " kalori\n";
        cout << "Kalori Harian (TDEE) dengan faktor aktivitas adalah = " << fixed << setprecision(2) << tdee << " kalori\n";
        if (bmi < 18.5) {
			cout << "Skor BMI anda adalah " << bmi << " (Berat Badan Kurang)" << endl;
		}else if (bmi >= 18.5 && bmi<=24.9){
			cout << "Skor BMI anda adalah " << bmi << " (Berat Badan Ideal)" << endl;
		}else if (bmi >= 25 && bmi<= 29.9){
			cout << "Skor BMI anda adalah " << bmi << " (Berat Badan Berlebih)" << endl;
		}else {
			cout << "Skor BMI anda adalah " << bmi << " (Obesitas)" << endl;
		}
        cout << "===============================================" << endl << endl;
        
		cout << "Anda Ingin Melakukan:" << endl;
		cout << "1. Defisit Kalori" << endl;
		cout << "2. Maintenance Kalori" << endl;
		cout << "3. Surplus Kalori" << endl;
		cout << "Silahkan Pilih: ";
		cin >> pilihan_1;
		cout << endl;
		
		cout << "===============================================" << endl;
		switch (pilihan_1){
			case 1:
				cout << "MAKANAN YANG DIANJURKAN:" << endl << endl;
				cout << "MAKAN PAGI : Sandwich (2 telur, 1 potong roti bakar" << endl << endl;
				cout << "MAKAN SIANG: Salad (40 gram bayam, 112 gram ayam bakar,"<< endl;
				cout << "             120 gram buncis, 25 mg wortel," << endl;
				cout << "             28 gram keju, minyak saitun)" << endl << endl;
				cout << "MAKAN MALAM: Salad (140 gram ikan kod panggang," << endl;
				cout << "             15 ml minyak zaitun, 138 gram quinoa," << endl;
				cout << "             175 gram brokoli)" << endl;
				olahraga ();
				break;
			case 2:
				cout << "MAKANAN YANG DIANJURKAN:" << endl << endl;
				cout << "MAKAN PAGI : Telur Omelet (2 telur, tomat, bayam)" << endl;
				cout << "             Sejumput keju rendah lemak (opsional))" << endl << endl;
				cout << "MAKAN SIANG: Dada Ayam Panggang (150g dada ayam, 300g nasi)"<< endl << endl;
				cout << "MAKAN MALAM: Ikan Salmon Panggang (150g fillet ikan salmon)" << endl;
				cout << "             Kentang Manis Panggang (300g kentang)" << endl;
				olahraga ();
				break;
			case 3:
				cout << "MAKANAN YANG DIANJURKAN:" << endl << endl;
				cout << "MAKAN PAGI : Oatmeal Peanut (1/2 cangkir oat instan" << endl;
				cout << "             1/2 cangkir susu tinggi lemak, 1 buah " << endl;
				cout << "             pisang, 2 sendok makan selai kacang" << endl;
				cout << "             Segenggam kismis, direndam, 1 sendok makan madu)" << endl << endl;
				cout << "CEMILAN    : Smoothies tinggi kalori" << endl << endl;
				cout << "MAKAN SIANG: Cheeseburger, kentang goreng ukuran kecil, dan milkshake cokelat" << endl << endl;
				cout << "CEMILAN    : Yogurt Greek (150g yogurt Greek rendah lemak dan" << endl;
				cout << "             Tambahkan potongan buah segar sebagai topping)" << endl << endl;
				cout << "MAKAN MALAM: 1 potongan kecil filet salmon dengan 1 sdm butter," << endl;
				cout << "             1/2 gelas nasi, 1/2 gelas brokoli, dan 1 gelas susu" << endl;
				cout << "             Kentang Manis Panggang (300g kentang)" << endl;
				olahraga ();
				break;
		}
	}else if (menu == 2) {
		system("cls");
		cout << "===============================================" << endl;
		cout << "|               SELAMAT DATANG                |" << endl;
		cout << "|                 HEALTH PRO                  |" << endl;
		cout << "|             KALKULATOR KALORI!              |" << endl;
		cout << "===============================================" << endl;
		
		cout << "LIST OLAHRAGA: " << endl;
		cout << "1. Lompat Tali | 2. Jogging" << endl;
		cout << "3. Bersepeda   | 4. Renang" << endl;
		cout << "Pilih Olahraga Apa yang Anda Lakukan! (1-4): ";
		cin >> pilihan_2;
		cout << "Durasi Olahraga Tersebut (Menit): ";
		cin >> durasi;
		cout << endl;
		
		klompat = 8 * durasi;
		kjogging = 11 * durasi;
		kbersepeda = 11 * durasi;
		krenang = 10 * durasi;
		
		cout << "===============================================" << endl;
		switch (pilihan_2) {
			case 1:
				cout << "Olahraga Lompat Tali selama " << durasi << " Menit Membakar " << klompat << " Kalori" << endl;
				break;
			case 2:
				cout << "Olahraga Jogging selama " << durasi << " Menit Membakar " << kjogging << " Kalori" << endl;
				break;
			case 3:
				cout << "Olahraga Bersepeda selama " << durasi << " Menit Membakar " << kbersepeda << " Kalori" << endl;
				break;
			case 4:
				cout << "Olahraga Renang selama " << durasi << " Menit Membakar " << krenang << " Kalori" << endl;
				break;
		}
		cout << "===============================================" << endl << endl;
	}
	cout << "Apakah Anda ingin melakukan perhitungan lagi? (Y/N): ";
    cin >> bmr_Again;
	system("cls");
	}while (bmr_Again == 'Y' || bmr_Again == 'y');

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    float tinggi, berat, meter, bmi;
    
    cout << "Masukkan tinggi badan (cm) : ";
    cin >> tinggi;
    cout << "Masukkan berat badan (kg)  : ";
    cin >> berat;
    
    meter = tinggi / 100;
    bmi = berat / (meter * meter);
    
    cout << endl;
    cout << "Hasil:" << endl;
    cout << "BMI      = " << bmi << endl;
    cout << "Kategori = ";

    if (bmi < 18.5) {
        cout << "Berat badan kurang" << endl;
    }else if (bmi <= 22.9) {
        cout << "Berat badan normal" << endl;
    }else if(bmi <= 29.9) {
        cout << "Berat badan berlebih" << endl;
    }else {
        cout << "Obesitas" << endl;
    }
    return 0;
}

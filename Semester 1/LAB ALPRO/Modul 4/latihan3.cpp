#include <iostream>
using namespace std;

void kali_dua(int &num) {
    num = num*2;
}

int main () {
    int angka = 10;
    
    cout << "Isi Variabel Angka = " << angka << endl;
    
    kali_dua(angka);
    
    cout << "Isi Variabel Angka = " << angka << endl;
    return 0;
}

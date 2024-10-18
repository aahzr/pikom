#include <iostream>
using namespace std;

void hitungLuasSegitiga(int alas, int tinggi) {
    double luas = (alas * tinggi) / 2.0;
    cout << "Luas segitiga adalah: " << luas << endl;
}

int main () {
    hitungLuasSegitiga (5, 7);
    hitungLuasSegitiga (2, 10);
    hitungLuasSegitiga (191, 357);
    return 0;
}
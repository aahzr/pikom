#include <iostream>
#define PI 3.14

using namespace std;

int main() {
    float radius, area;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> radius;
    area = PI * radius * radius;
    cout << "Luas lingkaran: " << area << endl;
    return 0;
}


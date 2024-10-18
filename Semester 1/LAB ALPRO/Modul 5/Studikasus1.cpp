#include <iostream>
using namespace std;

int main () {
	int harga[] = {5000, 2500, 7000, 12500, 33000};
	int total;
	int ta = sizeof(harga)/sizeof(*harga);
	
	for (int a = 0; a < ta; a++){
		total += harga[a];
	}
	cout << "Total Belanja Ardi: " << total << endl;
return 0;
}

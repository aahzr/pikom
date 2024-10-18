#include <iostream>
using namespace std;

int main() {
	int pulpen, pensil, buku, tpulpen, tpensil, tbuku, total, pajak, gtotal;
	float diskon;
	
	cout << "Masukkan jumlah pembelian" << endl;
	cout << "Pulpen : ";
	cin >> pulpen;
	cout << "Pensil : ";
	cin >> pensil;
	cout << "Buku   : ";
	cin >> buku;
	cout << endl;
	
	tpulpen = pulpen*5000;
	tpensil = pensil*3000;
	tbuku = buku*15000;
	total = tpulpen+tpensil+tbuku;
	
	cout << "Detail pembelian:" << endl;
	cout << pulpen << " Pulpen    : Rp" << tpulpen << endl;
	cout << pensil << " Pensil    : Rp" << tpensil << endl;	
	cout << buku << " Buku      : Rp" << tbuku << endl;
	cout << "---------------------------" << endl;
	cout << "Total       : " <<"Rp" << total << endl;
	cout << "---------------------------" << endl;
	
	switch (tbuku) {
		case 0:
			diskon = 0;
			cout << "Diskon      : Rp" << diskon << endl;
			break;
		default:
			diskon = total*15/100;
			cout << "Diskon      : Rp" << diskon << endl;
	}
	
	pajak = (total-diskon)*10/100;
	gtotal = (total+pajak)-diskon;
	
	cout << "Pajak       : Rp" << pajak << endl;
	cout << "---------------------------" << endl;
	cout << "Grand Total : Rp" << gtotal;
	return 0;
}

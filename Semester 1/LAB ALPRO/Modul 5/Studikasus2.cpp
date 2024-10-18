#include <iostream>
using namespace std;

void solve_while(int a[2][2], int b[2][2]){
	int hasil1 = a[0][0] + b[0][0];
	int hasil2 = a[0][1] + b[0][1];
	int hasil3 = a[1][0] + b[1][0];
	int hasil4 = a[1][1] + b[1][1];
	cout << hasil1 << " " << hasil2 << endl;
	cout << hasil3 << " " << hasil4 << endl;
}
int main () {
	int A[2][2] = {{10, 20},
					{30, 40}};
	int B[2][2] = {{5, -2},
					{3, 11}};
	solve_while(A, B);
}

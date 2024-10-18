#include <iostream>

using namespace std;

unsigned long long faktorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * faktorial(n - 1);
}

int main() {
    int n = 65;
    cout << "Faktorial dari " << n << " adalah " << faktorial(n) << endl;
    return 0;
}


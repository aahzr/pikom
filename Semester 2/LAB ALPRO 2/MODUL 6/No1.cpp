#include <iostream>
using namespace std;

int main() {
    int a;
    int *ptr;

    ptr = &a;

    a = 10;

    cout << "Nilai dari a melalui pointer: " << *ptr;

    return 0;
}


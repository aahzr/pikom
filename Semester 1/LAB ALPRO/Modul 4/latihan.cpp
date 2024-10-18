#include <iostream>
using namespace std;

void say_salam(string name) {
    cout << "Assalamu 'alaykum " << name << "!\n";
}

int main () {
    say_salam ("Ahsan");
    say_salam ("FIKOM");
    say_salam ("UMI");
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int a, b , lcm , found ;
    cout << "Enter two numbers: ";
    cin >> a >> b;
     lcm = (a > b) ? a : b;
     found = 0;

    while (found == 0) {
        if (lcm % a == 0 && lcm % b == 0) {
            found = 1;
        } else {
            lcm++;
        }
    }

    cout << "LCM = " << lcm << endl;

    return 0;
}
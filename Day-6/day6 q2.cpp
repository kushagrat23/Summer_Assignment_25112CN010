#include <iostream>
using namespace std;
int main(){
    int n, original, digit, decimal, base, temp;
    decimal = 0;
    base = 1;

    cout << "Enter binary number: ";
    cin >> n;
    temp = n;

    while(temp != 0){
        digit = temp % 10;
        decimal += digit * base;
        base *= 2;
        temp /= 10;
    }

    cout << "Decimal = " << decimal << endl;

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int isArmstrong(int n){
    int original, digit, sum, count, temp;
    original = n;
    sum = 0;
    count = 0;
    temp = n;
    while(temp != 0){
        count++;
        temp /= 10;
    }
    while(n != 0){
        digit = n % 10;
        sum += pow(digit, count);
        n /= 10;
    }
    if(sum == original) return 1;
    else return 0;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isArmstrong(n))
        cout << n << " is Armstrong!" << endl;
    else
        cout << n << " is NOT Armstrong!" << endl;
    return 0;
}
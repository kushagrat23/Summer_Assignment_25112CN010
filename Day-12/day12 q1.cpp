#include <iostream>
using namespace std;

int isPalindrome(int n){
    int original, rev, digit;
    original = n;
    rev = 0;
    while(n != 0){
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    if(rev == original) return 1;
    else return 0;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isPalindrome(n))
        cout << n << " is Palindrome!" << endl;
    else
        cout << n << " is NOT Palindrome!" << endl;
    return 0;
}
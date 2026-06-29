#include <iostream>
using namespace std;
int main(){
    char str[100];
    int length, start, end, isPalindrome;
    length = 0;
    isPalindrome = 1;

    cout << "Enter a string: ";
    cin >> str;

    while(str[length] != '\0'){
        length++;
    }

    start = 0;
    end = length - 1;

    while(start < end){
        if(str[start] != str[end]){
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if(isPalindrome == 1)
        cout << str << " is a Palindrome!" << endl;
    else
        cout << str << " is NOT a Palindrome!" << endl;

    return 0;
}
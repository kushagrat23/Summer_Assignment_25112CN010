#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, original, digit, sum, count, temp;
    sum = 0;
    count = 0;
    
    cout << "Enter a number: ";
    cin >> n;
    original = n;
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
    
    
    if(sum == original)
        cout << original << " is Armstrong!" << endl;
    else
        cout << original << " is NOT Armstrong!" << endl;
    
    return 0;
}
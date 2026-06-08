#include <iostream>
using namespace std;
int main(){
    int n, original, digit, sum, fact, temp;
    sum = 0;

    cout << "Enter a number: ";
    cin >> n;
    original = n;

    while(n != 0){
        digit = n % 10;
        n /= 10;

        fact = 1;
        for(int i=1; i<=digit; i++){
            fact *= i;
        }

        sum += fact;
    }

    if(sum == original)
        cout << original << " is a Strong number!" << endl;
    else
        cout << original << " is NOT a Strong number!" << endl;

    return 0;
}
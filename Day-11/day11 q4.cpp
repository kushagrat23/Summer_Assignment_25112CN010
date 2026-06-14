#include <iostream>
using namespace std;

int factorial(int n){
    int i, fact;
    fact = 1;
    for(i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial = " << factorial(n) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int isPerfect(int n){
    int i, sum;
    sum = 0;
    for(i=1; i<=n/2; i++){
        if(n % i == 0)
            sum += i;
    }
    if(sum == n) return 1;
    else return 0;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isPerfect(n))
        cout << n << " is Perfect!" << endl;
    else
        cout << n << " is NOT Perfect!" << endl;
    return 0;
}
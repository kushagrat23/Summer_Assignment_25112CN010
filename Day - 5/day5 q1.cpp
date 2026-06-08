#include <iostream>
using namespace std;
int main(){
    int n, i, sum;
    sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(i=1; i<=n/2; i++){
        if(n % i == 0){
            sum += i;
        }
    }

    if(sum == n)
        cout << n << " is a Perfect number!" << endl;
    else
        cout << n << " is NOT a Perfect number!" << endl;

    return 0;
}
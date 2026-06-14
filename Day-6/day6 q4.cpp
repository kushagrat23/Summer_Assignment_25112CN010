#include <iostream>
using namespace std;
int main(){
    int x, n, i, result;
    result = 1;

    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter power (n): ";
    cin >> n;

    for(i=1; i<=n; i++){
        result *= x;
    }

    cout << x << "^" << n << " = " << result << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n, i, largest;
    largest = -1;

    cout << "Enter a number: ";
    cin >> n;

    for(i=2; i<=n; i++){
        while(n % i == 0){
            largest = i;
            n /= i;
        }
    }

    cout << "Largest prime factor = " << largest << endl;

    return 0;
}
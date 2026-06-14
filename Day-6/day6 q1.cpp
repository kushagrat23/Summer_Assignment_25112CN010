#include <iostream>
using namespace std;
int main(){
    int n, i, rem, binary[32];
    i = 0;

    cout << "Enter decimal number: ";
    cin >> n;

    while(n != 0){
        rem = n % 2;
        binary[i] = rem;
        n /= 2;
        i++;
    }

    cout << "Binary = ";
    for(int j=i-1; j>=0; j--){
        cout << binary[j];
    }

    return 0;
}
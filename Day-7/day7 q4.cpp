#include <iostream>
using namespace std;

void reverse(int n){
    if(n == 0) return;      
    cout << n % 10;          
    reverse(n/10);          
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Reversed = ";
    reverse(n);
    return 0;
}
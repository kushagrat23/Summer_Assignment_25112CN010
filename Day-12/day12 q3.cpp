#include <iostream>
using namespace std;

void fibonacci(int n){
    int a, b, next, i;
    a = 0;
    b = 1;
    for(i=1; i<=n; i++){
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
}

int main(){
    int n;
    cout << "Enter terms: ";
    cin >> n;
    cout << "Fibonacci: ";
    fibonacci(n);
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n, a=0, b=1, next, i;
    
    cout << "Enter n: ";
    cin >> n;
    
    if(n == 1){
        cout << "Nth term = 0";
    } else {
        for(i=2; i<=n; i++){
            next = a + b;
            a = b;
            b = next;
        }
        cout << "Nth term = " << a;
    }
    
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n, i, j;

    cout << "Enter rows: ";
    cin >> n;

    for(i=n; i>=1; i--){
        
        for(j=i; j<n; j++){
            cout << " ";
        }
        
        for(j=1; j<=(2*i-1); j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
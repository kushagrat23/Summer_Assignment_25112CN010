#include <iostream>
using namespace std;
int main(){
    int n, i, j;

    cout << "Enter rows: ";
    cin >> n;

    for(i=1; i<=n; i++){
       
        for(j=i; j<n; j++){
            cout << " ";
        }
       
        for(j=0; j<i; j++){
            cout << (char)('A' + j);
        }
        
        for(j=i-2; j>=0; j--){
            cout << (char)('A' + j);
        }
        cout << endl;
    }

    return 0;
}
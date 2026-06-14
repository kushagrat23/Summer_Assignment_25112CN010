#include <iostream>
using namespace std;
int main(){
    int n, i, arr[100];

    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Array: ";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
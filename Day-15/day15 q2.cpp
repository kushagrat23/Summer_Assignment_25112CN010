#include <iostream>
using namespace std;
int main(){
    int n, i, arr[100], first;

    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    first = arr[0];
    for(i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = first;

    cout << "Left rotated array: ";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
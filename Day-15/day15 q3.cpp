#include <iostream>
using namespace std;
int main(){
    int n, i, arr[100], last;

    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    last = arr[n-1];
    for(i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = last;

    cout << "Right rotated array: ";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
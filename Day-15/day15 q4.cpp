#include <iostream>
using namespace std;
int main(){
    int n, i, arr[100], j;

    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    j = 0;
    for(i=0; i<n; i++){
        if(arr[i] != 0){
            arr[j] = arr[i];
            j++;
        }
    }

    while(j < n){
        arr[j] = 0;
        j++;
    }

    cout << "Array after moving zeroes: ";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n, i, j, arr[100], temp;

    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Descending sorted array: ";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
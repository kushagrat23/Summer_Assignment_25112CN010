#include <iostream>
using namespace std;
int main(){
    int n, i, j, arr[100], temp, minIndex;

    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    for(i=0; i<n-1; i++){
        minIndex = i;
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Sorted array: ";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
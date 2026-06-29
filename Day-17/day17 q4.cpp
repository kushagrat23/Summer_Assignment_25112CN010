#include <iostream>
using namespace std;
int main(){
    int n1, n2, i, j, arr1[100], arr2[100];

    cout << "Enter size of array 1: ";
    cin >> n1;
    for(i=0; i<n1; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr1[i];
    }

    cout << "Enter size of array 2: ";
    cin >> n2;
    for(i=0; i<n2; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr2[i];
    }

    cout << "Common elements: ";
    for(i=0; i<n1; i++){
        for(j=0; j<n2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n1, n2, i, arr1[100], arr2[100], merged[200], k;

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

    k = 0;
    for(i=0; i<n1; i++){
        merged[k] = arr1[i];
        k++;
    }
    for(i=0; i<n2; i++){
        merged[k] = arr2[i];
        k++;
    }

    cout << "Merged array: ";
    for(i=0; i<k; i++){
        cout << merged[i] << " ";
    }

    return 0;
}
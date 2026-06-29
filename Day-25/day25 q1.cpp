#include <iostream>
using namespace std;
int main(){
    int n1, n2, i, j, k, arr1[100], arr2[100], merged[200];

    cout << "Enter size of array 1: ";
    cin >> n1;
    cout << "Enter elements in sorted order: ";
    for(i=0; i<n1; i++){
        cin >> arr1[i];
    }

    cout << "Enter size of array 2: ";
    cin >> n2;
    cout << "Enter elements in sorted order: ";
    for(i=0; i<n2; i++){
        cin >> arr2[i];
    }

    i = 0; j = 0; k = 0;

    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        merged[k] = arr1[i];
        i++; k++;
    }
    while(j < n2){
        merged[k] = arr2[j];
        j++; k++;
    }

    cout << "Merged sorted array: ";
    for(i=0; i<k; i++){
        cout << merged[i] << " ";
    }

    return 0;
}
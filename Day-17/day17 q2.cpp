#include <iostream>
using namespace std;
int main(){
    int n1, n2, i, j, arr1[100], arr2[100], result[200], k, isDuplicate;

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

    // add elements from arr1 (skip duplicates within arr1)
    for(i=0; i<n1; i++){
        isDuplicate = 0;
        for(j=0; j<k; j++){
            if(arr1[i] == result[j]){
                isDuplicate = 1;
                break;
            }
        }
        if(isDuplicate == 0){
            result[k] = arr1[i];
            k++;
        }
    }

    // add elements from arr2 (skip if already in result)
    for(i=0; i<n2; i++){
        isDuplicate = 0;
        for(j=0; j<k; j++){
            if(arr2[i] == result[j]){
                isDuplicate = 1;
                break;
            }
        }
        if(isDuplicate == 0){
            result[k] = arr2[i];
            k++;
        }
    }

    cout << "Union: ";
    for(i=0; i<k; i++){
        cout << result[i] << " ";
    }

    return 0;
}
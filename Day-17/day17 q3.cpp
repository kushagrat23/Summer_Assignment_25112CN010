#include <iostream>
using namespace std;
int main(){
    int n1, n2, i, j, arr1[100], arr2[100], result[100], k, isAlreadyAdded, isCommon;

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
        isCommon = 0;
        for(j=0; j<n2; j++){
            if(arr1[i] == arr2[j]){
                isCommon = 1;
                break;
            }
        }

        if(isCommon == 1){
            isAlreadyAdded = 0;
            for(j=0; j<k; j++){
                if(result[j] == arr1[i]){
                    isAlreadyAdded = 1;
                    break;
                }
            }
            if(isAlreadyAdded == 0){
                result[k] = arr1[i];
                k++;
            }
        }
    }

    cout << "Intersection: ";
    for(i=0; i<k; i++){
        cout << result[i] << " ";
    }

    return 0;
}
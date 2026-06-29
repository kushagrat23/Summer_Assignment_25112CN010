#include <iostream>
using namespace std;
int main(){
    int n, i, j, arr[100], result[100], k, isDuplicate;

    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    k = 0;
    for(i=0; i<n; i++){
        isDuplicate = 0;
        for(j=0; j<k; j++){
            if(arr[i] == result[j]){
                isDuplicate = 1;
                break;
            }
        }
        if(isDuplicate == 0){
            result[k] = arr[i];
            k++;
        }
    }

    cout << "Array after removing duplicates: ";
    for(i=0; i<k; i++){
        cout << result[i] << " ";
    }

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n, i, j, arr[100], count, maxCount, result;

    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    maxCount = 0;
    result = arr[0];

    for(i=0; i<n; i++){
        count = 0;
        for(j=0; j<n; j++){
            if(arr[j] == arr[i])
                count++;
        }
        if(count > maxCount){
            maxCount = count;
            result = arr[i];
        }
    }

    cout << "Most frequent element = " << result << " (appears " << maxCount << " times)" << endl;

    return 0;
}
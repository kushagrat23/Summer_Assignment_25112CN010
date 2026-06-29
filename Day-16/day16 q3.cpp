#include <iostream>
using namespace std;
int main(){
    int n, i, j, arr[100], target, found;
    found = 0;

    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                cout << "Pair found: " << arr[i] << " + " << arr[j] << " = " << target << endl;
                found = 1;
            }
        }
    }

    if(found == 0)
        cout << "No pair found!" << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n, i, j, arr[100];

    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Duplicate elements: ";
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}
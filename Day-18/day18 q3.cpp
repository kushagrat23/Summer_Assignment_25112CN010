#include <iostream>
using namespace std;
int main(){
    int n, i, arr[100], key, low, high, mid, found;
    found = 0;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements in sorted order: ";
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    low = 0;
    high = n-1;

    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == key){
            cout << key << " found at index " << mid << endl;
            found = 1;
            break;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    if(found == 0)
        cout << key << " not found!" << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n, i, arr[100], key, found;
    found = 0;

    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for(i=0; i<n; i++){
        if(arr[i] == key){
            cout << key << " found at index " << i << endl;
            found = 1;
        }
    }

    if(found == 0)
        cout << key << " not found!" << endl;

    return 0;
}
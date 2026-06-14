#include <iostream>
using namespace std;
int main(){
    int n, i, arr[100], key, count;
    count = 0;

    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter element to count: ";
    cin >> key;

    for(i=0; i<n; i++){
        if(arr[i] == key)
            count++;
    }

    cout << key << " appears " << count << " times" << endl;

    return 0;
}
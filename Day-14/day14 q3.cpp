#include <iostream>
using namespace std;
int main(){
    int n, i, arr[100], largest, second;

    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    largest = arr[0];
    second = arr[0];

    
    for(i=1; i<n; i++){
        if(arr[i] > largest)
            largest = arr[i];
    }

    
    for(i=0; i<n; i++){
        if(arr[i] > second && arr[i] != largest)
            second = arr[i];
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << second << endl;

    return 0;
}
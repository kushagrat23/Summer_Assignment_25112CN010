#include <iostream>
using namespace std;
int main(){
    int n, i, arr[100], temp, start, end;

    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    start = 0;
    end = n-1;

    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    cout << "Reversed array: ";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
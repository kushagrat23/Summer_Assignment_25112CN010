#include <iostream>
using namespace std;
int main(){
    int n, i, arr[100], actualSum, expectedSum, missing;

    cout << "Enter size (n): ";
    cin >> n;

    actualSum = 0;
    for(i=0; i<n-1; i++){    // only n-1 elements since one is missing
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
        actualSum += arr[i];
    }

    expectedSum = n * (n+1) / 2;
    missing = expectedSum - actualSum;

    cout << "Missing number = " << missing << endl;

    return 0;
}
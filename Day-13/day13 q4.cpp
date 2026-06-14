#include <iostream>
using namespace std;
int main(){
    int n, i, arr[100], even, odd;
    even = 0;
    odd = 0;

    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even count = " << even << endl;
    cout << "Odd count = " << odd << endl;

    return 0;
}
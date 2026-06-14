#include <iostream>
using namespace std;
int main(){
    int n, i, arr[100], sum;
    float avg;
    sum = 0;

    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    avg = (float)sum / n;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}
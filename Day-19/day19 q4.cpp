#include <iostream>
using namespace std;
int main(){
    int n, i, j, a[10][10], sum;
    sum = 0;

    cout << "Enter size (n x n): ";
    cin >> n;

    cout << "Enter elements of Matrix:" << endl;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    for(i=0; i<n; i++){
        sum += a[i][i];
    }

    cout << "Diagonal sum = " << sum << endl;

    return 0;
}
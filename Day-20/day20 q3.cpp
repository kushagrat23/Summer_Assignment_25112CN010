#include <iostream>
using namespace std;
int main(){
    int r, c, i, j, a[10][10], rowSum;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter elements of Matrix:" << endl;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin >> a[i][j];
        }
    }

    cout << "Row-wise sums:" << endl;
    for(i=0; i<r; i++){
        rowSum = 0;
        for(j=0; j<c; j++){
            rowSum += a[i][j];
        }
        cout << "Row " << i+1 << " sum = " << rowSum << endl;
    }

    return 0;
}
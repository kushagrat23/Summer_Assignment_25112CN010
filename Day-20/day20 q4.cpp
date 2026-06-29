#include <iostream>
using namespace std;
int main(){
    int r, c, i, j, a[10][10], colSum;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter elements of Matrix:" << endl;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin >> a[i][j];
        }
    }

    cout << "Column-wise sums:" << endl;
    for(j=0; j<c; j++){
        colSum = 0;
        for(i=0; i<r; i++){
            colSum += a[i][j];
        }
        cout << "Column " << j+1 << " sum = " << colSum << endl;
    }

    return 0;
}
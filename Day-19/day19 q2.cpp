#include <iostream>
using namespace std;
int main(){
    int r, c, i, j, a[10][10], b[10][10], diff[10][10];

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter elements of Matrix A:" << endl;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of Matrix B:" << endl;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin >> b[i][j];
        }
    }

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "Difference Matrix:" << endl;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
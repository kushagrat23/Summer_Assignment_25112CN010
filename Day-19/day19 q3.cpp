#include <iostream>
using namespace std;
int main(){
    int r, c, i, j, a[10][10], transpose[10][10];

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter elements of Matrix:" << endl;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin >> a[i][j];
        }
    }

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            transpose[j][i] = a[i][j];
        }
    }

    cout << "Transpose Matrix:" << endl;
    for(i=0; i<c; i++){           // note: rows become c, cols become r
        for(j=0; j<r; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
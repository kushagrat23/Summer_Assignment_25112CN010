#include <iostream>
using namespace std;
int main(){
    int n, i, j, a[10][10], isSymmetric;
    isSymmetric = 1;

    cout << "Enter size (n x n): ";
    cin >> n;

    cout << "Enter elements of Matrix:" << endl;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a[i][j] != a[j][i]){
                isSymmetric = 0;
            }
        }
    }

    if(isSymmetric == 1)
        cout << "Matrix is Symmetric!" << endl;
    else
        cout << "Matrix is NOT Symmetric!" << endl;

    return 0;
}
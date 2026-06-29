#include <iostream>
using namespace std;
int main(){
    int r1, c1, r2, c2, i, j, k, a[10][10], b[10][10], result[10][10];

    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter elements of Matrix A:" << endl;
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            cin >> a[i][j];
        }
    }

    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    cout << "Enter elements of Matrix B:" << endl;
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            cin >> b[i][j];
        }
    }

    if(c1 != r2){
        cout << "Multiplication not possible!" << endl;
        return 0;
    }

    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            result[i][j] = 0;
            for(k=0; k<c1; k++){
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Result Matrix:" << endl;
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n, i, j;
    char names[50][50], temp[50];

    cout << "Enter number of names: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter name " << i+1 << ": ";
        cin >> names[i];
    }

    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(strcmp(names[j], names[j+1]) > 0){
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }

    cout << "Sorted names: " << endl;
    for(i=0; i<n; i++){
        cout << names[i] << endl;
    }

    return 0;
}
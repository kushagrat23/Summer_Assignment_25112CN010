#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n, i, j;
    char words[50][50], temp[50];

    cout << "Enter number of words: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Enter word " << i+1 << ": ";
        cin >> words[i];
    }

    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(strlen(words[j]) > strlen(words[j+1])){
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
    }

    cout << "Words sorted by length: " << endl;
    for(i=0; i<n; i++){
        cout << words[i] << endl;
    }

    return 0;
}
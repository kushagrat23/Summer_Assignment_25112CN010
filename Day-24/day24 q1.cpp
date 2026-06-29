#include <iostream>
using namespace std;
int main(){
    char str1[100], str2[100], combined[200];
    int len1, len2, i, j, k, found, match;
    len1 = 0;
    len2 = 0;
    found = 0;

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    while(str1[len1] != '\0') len1++;
    while(str2[len2] != '\0') len2++;

    if(len1 != len2){
        cout << "NOT a rotation (different lengths)!" << endl;
        return 0;
    }

    // create combined = str1 + str1
    for(i=0; i<len1; i++){
        combined[i] = str1[i];
    }
    for(i=0; i<len1; i++){
        combined[len1 + i] = str1[i];
    }

    // search for str2 inside combined
    for(i=0; i<2*len1 - len2 + 1; i++){
        match = 1;
        for(j=0; j<len2; j++){
            if(combined[i+j] != str2[j]){
                match = 0;
                break;
            }
        }
        if(match == 1){
            found = 1;
            break;
        }
    }

    if(found == 1)
        cout << str2 << " IS a rotation of " << str1 << endl;
    else
        cout << str2 << " is NOT a rotation of " << str1 << endl;

    return 0;
}
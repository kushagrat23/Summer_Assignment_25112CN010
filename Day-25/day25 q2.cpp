#include <iostream>
using namespace std;
int main(){
    char str1[100], str2[100];
    int len1, len2, i, j, isCommon, alreadyPrinted, k, printed[100];
    len1 = 0; len2 = 0; k = 0;

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    while(str1[len1] != '\0') len1++;
    while(str2[len2] != '\0') len2++;

    cout << "Common characters: ";
    for(i=0; i<len1; i++){
        isCommon = 0;
        for(j=0; j<len2; j++){
            if(str1[i] == str2[j]){
                isCommon = 1;
                break;
            }
        }
        if(isCommon == 1){
            alreadyPrinted = 0;
            for(j=0; j<k; j++){
                if(printed[j] == str1[i]){
                    alreadyPrinted = 1;
                    break;
                }
            }
            if(alreadyPrinted == 0){
                cout << str1[i] << " ";
                printed[k] = str1[i];
                k++;
            }
        }
    }
    cout << endl;

    return 0;
}
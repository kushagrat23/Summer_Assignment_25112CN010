#include <iostream>
using namespace std;
int main(){
    char str[200];
    int length, i, currentLen, maxLen, startIndex, maxStartIndex;
    length = 0;
    currentLen = 0;
    maxLen = 0;
    startIndex = 0;
    maxStartIndex = 0;

    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    while(str[length] != '\0'){
        length++;
    }

    for(i=0; i<=length; i++){
        if(str[i] != ' ' && str[i] != '\0'){
            currentLen++;
        } else {
            if(currentLen > maxLen){
                maxLen = currentLen;
                maxStartIndex = startIndex;
            }
            currentLen = 0;
            startIndex = i + 1;
        }
    }

    cout << "Longest word = ";
    for(i=maxStartIndex; i<maxStartIndex+maxLen; i++){
        cout << str[i];
    }
    cout << " (length = " << maxLen << ")" << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    char str[100];
    int length, i, count[256], maxCount, maxIndex;
    length = 0;

    cout << "Enter a string: ";
    cin >> str;

    while(str[length] != '\0'){
        length++;
    }

    for(i=0; i<256; i++){
        count[i] = 0;
    }

    for(i=0; i<length; i++){
        count[(int)str[i]]++;
    }

    maxCount = 0;
    maxIndex = 0;

    for(i=0; i<256; i++){
        if(count[i] > maxCount){
            maxCount = count[i];
            maxIndex = i;
        }
    }

    cout << "Maximum occurring character = " << (char)maxIndex << " (" << maxCount << " times)" << endl;

    return 0;
}
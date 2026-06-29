#include <iostream>
using namespace std;
int main(){
    char str[200];
    int length, i, wordCount;
    length = 0;
    wordCount = 1;

    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    while(str[length] != '\0'){
        length++;
    }

    for(i=0; i<length; i++){
        if(str[i] == ' '){
            wordCount++;
        }
    }

    cout << "Word count = " << wordCount << endl;

    return 0;
}
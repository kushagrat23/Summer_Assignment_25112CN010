#include <iostream>
using namespace std;
int main(){
    char str[200];
    int length, i, j;
    length = 0;

    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    while(str[length] != '\0'){
        length++;
    }

    j = 0;
    for(i=0; i<length; i++){
        if(str[i] != ' '){
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';   // mark new end of string

    cout << "Without spaces: " << str << endl;

    return 0;
}
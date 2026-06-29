#include <iostream>
using namespace std;
int main(){
    char str[100];
    int length, i, j, isRepeating, found;
    length = 0;
    found = 0;

    cout << "Enter a string: ";
    cin >> str;

    while(str[length] != '\0'){
        length++;
    }

    for(i=0; i<length; i++){
        isRepeating = 0;
        for(j=i+1; j<length; j++){
            if(str[i] == str[j]){
                isRepeating = 1;
                break;
            }
        }
        if(isRepeating == 1){
            cout << "First repeating character = " << str[i] << endl;
            found = 1;
            break;
        }
    }

    if(found == 0)
        cout << "No repeating character found!" << endl;

    return 0;
}
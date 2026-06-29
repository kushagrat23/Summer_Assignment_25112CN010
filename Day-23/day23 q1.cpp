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
        for(j=0; j<length; j++){
            if(i != j && str[i] == str[j]){
                isRepeating = 1;
                break;
            }
        }
        if(isRepeating == 0){
            cout << "First non-repeating character = " << str[i] << endl;
            found = 1;
            break;
        }
    }

    if(found == 0)
        cout << "No non-repeating character found!" << endl;

    return 0;
}
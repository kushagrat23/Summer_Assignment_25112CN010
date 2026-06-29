#include <iostream>
using namespace std;
int main(){
    char str[100];
    int length, i, count;
    length = 0;

    cout << "Enter a string: ";
    cin >> str;

    while(str[length] != '\0'){
        length++;
    }

    cout << "Compressed: ";
    for(i=0; i<length; i++){
        count = 1;
        while(i+1 < length && str[i] == str[i+1]){
            count++;
            i++;
        }
        cout << str[i] << count;
    }
    cout << endl;

    return 0;
}
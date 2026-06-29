#include <iostream>
using namespace std;
int main(){
    char str[100];
    int length, i;
    length = 0;

    cout << "Enter a string: ";
    cin >> str;

    while(str[length] != '\0'){
        length++;
    }

    for(i=0; i<length; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 'a' + 'A';
        }
    }

    cout << "Uppercase = " << str << endl;

    return 0;
}
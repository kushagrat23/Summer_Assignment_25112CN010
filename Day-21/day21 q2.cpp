#include <iostream>
using namespace std;
int main(){
    char str[100];
    int length, start, end, temp;
    length = 0;

    cout << "Enter a string: ";
    cin >> str;

    while(str[length] != '\0'){
        length++;
    }

    start = 0;
    end = length - 1;

    while(start < end){
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    cout << "Reversed string = " << str << endl;

    return 0;
}
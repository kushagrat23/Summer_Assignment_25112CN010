#include <iostream>
using namespace std;
int main(){
    char str[100];
    int length, i, j, count[100];
    length = 0;

    cout << "Enter a string: ";
    cin >> str;

    while(str[length] != '\0'){
        length++;
    }

    for(i=0; i<length; i++){
        count[i] = -1;
    }

    for(i=0; i<length; i++){
        if(count[i] != -1)
            continue;

        int freq = 1;
        for(j=i+1; j<length; j++){
            if(str[i] == str[j]){
                freq++;
                count[j] = 0;  // mark as already counted
            }
        }
        cout << str[i] << " = " << freq << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    char str[100], result[100];
    int length, i, j, k, isDuplicate;
    length = 0;
    k = 0;

    cout << "Enter a string: ";
    cin >> str;

    while(str[length] != '\0'){
        length++;
    }

    for(i=0; i<length; i++){
        isDuplicate = 0;
        for(j=0; j<k; j++){
            if(str[i] == result[j]){
                isDuplicate = 1;
                break;
            }
        }
        if(isDuplicate == 0){
            result[k] = str[i];
            k++;
        }
    }
    result[k] = '\0';

    cout << "Without duplicates: " << result << endl;

    return 0;
}
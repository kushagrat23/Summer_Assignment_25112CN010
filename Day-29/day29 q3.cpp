#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str[100];
    int choice, length, i, start, end;
    char temp;

    do{
        cout << "\n----- STRING OPERATIONS -----" << endl;
        cout << "1. Input String" << endl;
        cout << "2. Find Length" << endl;
        cout << "3. Reverse String" << endl;
        cout << "4. Check Palindrome" << endl;
        cout << "5. Convert to Uppercase" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter a string: ";
            cin >> str;
        }
        else if(choice == 2){
            length = strlen(str);
            cout << "Length = " << length << endl;
        }
        else if(choice == 3){
            length = strlen(str);
            start = 0;
            end = length - 1;
            while(start < end){
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            cout << "Reversed = " << str << endl;
        }
        else if(choice == 4){
            length = strlen(str);
            int isPalindrome = 1;
            start = 0;
            end = length - 1;
            while(start < end){
                if(str[start] != str[end]){
                    isPalindrome = 0;
                    break;
                }
                start++;
                end--;
            }
            if(isPalindrome) cout << "Palindrome!" << endl;
            else cout << "NOT Palindrome!" << endl;
        }
        else if(choice == 5){
            length = strlen(str);
            for(i=0; i<length; i++){
                if(str[i] >= 'a' && str[i] <= 'z'){
                    str[i] = str[i] - 'a' + 'A';
                }
            }
            cout << "Uppercase = " << str << endl;
        }
        else if(choice == 6){
            cout << "Exiting!" << endl;
        }

    } while(choice != 6);

    return 0;
}
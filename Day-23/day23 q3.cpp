#include <iostream>
using namespace std;
int main(){
    char str1[100], str2[100];
    int len1, len2, i, count1[26], count2[26], isAnagram;
    len1 = 0;
    len2 = 0;
    isAnagram = 1;

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    while(str1[len1] != '\0') len1++;
    while(str2[len2] != '\0') len2++;

    for(i=0; i<26; i++){
        count1[i] = 0;
        count2[i] = 0;
    }

    if(len1 != len2){
        cout << "NOT Anagram (different lengths)!" << endl;
        return 0;
    }

    for(i=0; i<len1; i++){
        count1[str1[i] - 'a']++;
    }
    for(i=0; i<len2; i++){
        count2[str2[i] - 'a']++;
    }

    for(i=0; i<26; i++){
        if(count1[i] != count2[i]){
            isAnagram = 0;
            break;
        }
    }

    if(isAnagram == 1)
        cout << "Anagram!" << endl;
    else
        cout << "NOT Anagram!" << endl;

    return 0;
}
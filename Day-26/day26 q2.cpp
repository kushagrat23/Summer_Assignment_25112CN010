#include <iostream>
using namespace std;
int main(){
    int age;
    char name[50];

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18){
        cout << name << ", you are eligible to vote!" << endl;
    } else {
        int yearsLeft = 18 - age;
        cout << name << ", you are NOT eligible to vote." << endl;
        cout << "You can vote after " << yearsLeft << " years." << endl;
    }

    return 0;
}
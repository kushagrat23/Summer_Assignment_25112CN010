#include <iostream>
using namespace std;
int main(){
    char name[50];
    int rollNo;
    float marks[5], total, percentage;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;

    total = 0;
    cout << "Enter marks for 5 subjects:" << endl;
    for(int i=0; i<5; i++){
        cout << "Subject " << i+1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    percentage = (total / 500) * 100;

    cout << "\n----- MARKSHEET -----" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    char grade;
    if(percentage >= 90) grade = 'A';
    else if(percentage >= 75) grade = 'B';
    else if(percentage >= 60) grade = 'C';
    else if(percentage >= 40) grade = 'D';
    else grade = 'F';

    cout << "Grade: " << grade << endl;

    return 0;
}
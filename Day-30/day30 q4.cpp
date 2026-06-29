#include <iostream>
#include <cstring>
using namespace std;

char names[50][50];
int rollNo[50];
float marks[50];
int count = 0;

void addStudent(){
    cout << "Enter name: ";
    cin >> names[count];
    cout << "Enter roll number: ";
    cin >> rollNo[count];
    cout << "Enter marks: ";
    cin >> marks[count];
    count++;
    cout << "Student added!" << endl;
}

void viewStudents(){
    if(count == 0){
        cout << "No records found!" << endl;
        return;
    }
    cout << "\nName\tRoll\tMarks" << endl;
    for(int i=0; i<count; i++){
        cout << names[i] << "\t" << rollNo[i] << "\t" << marks[i] << endl;
    }
}

void searchStudent(){
    int searchRoll, found;
    found = 0;
    cout << "Enter roll number: ";
    cin >> searchRoll;
    for(int i=0; i<count; i++){
        if(rollNo[i] == searchRoll){
            cout << "Found! Name: " << names[i] << ", Marks: " << marks[i] << endl;
            found = 1;
            break;
        }
    }
    if(found == 0) cout << "Not found!" << endl;
}

float findAverage(){
    float sum = 0;
    for(int i=0; i<count; i++){
        sum += marks[i];
    }
    return (count == 0) ? 0 : sum / count;
}

int main(){
    int choice;

    do{
        cout << "\n----- STUDENT MANAGEMENT SYSTEM -----" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View All Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Find Average Marks" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) addStudent();
        else if(choice == 2) viewStudents();
        else if(choice == 3) searchStudent();
        else if(choice == 4) cout << "Average Marks = " << findAverage() << endl;
        else if(choice == 5) cout << "Exiting!" << endl;
        else cout << "Invalid choice!" << endl;

    } while(choice != 5);

    return 0;
}
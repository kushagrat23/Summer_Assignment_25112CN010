#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char names[50][50];
    int rollNo[50];
    float marks[50];
    int count, choice, i, searchRoll, found;
    count = 0;

    do{
        cout << "\n----- STUDENT RECORD SYSTEM -----" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View All Students" << endl;
        cout << "3. Search Student by Roll No" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter name: ";
            cin >> names[count];
            cout << "Enter roll number: ";
            cin >> rollNo[count];
            cout << "Enter marks: ";
            cin >> marks[count];
            count++;
            cout << "Student added successfully!" << endl;
        }
        else if(choice == 2){
            if(count == 0){
                cout << "No records found!" << endl;
            } else {
                cout << "\nName\tRoll No\tMarks" << endl;
                for(i=0; i<count; i++){
                    cout << names[i] << "\t" << rollNo[i] << "\t" << marks[i] << endl;
                }
            }
        }
        else if(choice == 3){
            cout << "Enter roll number to search: ";
            cin >> searchRoll;
            found = 0;
            for(i=0; i<count; i++){
                if(rollNo[i] == searchRoll){
                    cout << "Found! Name: " << names[i] << ", Marks: " << marks[i] << endl;
                    found = 1;
                    break;
                }
            }
            if(found == 0){
                cout << "Student not found!" << endl;
            }
        }
        else if(choice == 4){
            cout << "Exiting program!" << endl;
        }
        else{
            cout << "Invalid choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}
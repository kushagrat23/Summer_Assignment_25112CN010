#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char names[50][50];
    int rollNo[50];
    float marks[50][5], total[50], percentage[50];
    char grade[50];
    int count, choice, i, j, searchRoll, found;
    count = 0;

    do{
        cout << "\n----- STUDENT RECORD SYSTEM -----" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View All Students" << endl;
        cout << "3. Search by Roll No" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter name: ";
            cin >> names[count];
            cout << "Enter roll number: ";
            cin >> rollNo[count];

            total[count] = 0;
            cout << "Enter marks for 5 subjects:" << endl;
            for(j=0; j<5; j++){
                cout << "Subject " << j+1 << ": ";
                cin >> marks[count][j];
                total[count] += marks[count][j];
            }

            percentage[count] = (total[count] / 500) * 100;

            if(percentage[count] >= 90) grade[count] = 'A';
            else if(percentage[count] >= 75) grade[count] = 'B';
            else if(percentage[count] >= 60) grade[count] = 'C';
            else if(percentage[count] >= 40) grade[count] = 'D';
            else grade[count] = 'F';

            count++;
            cout << "Student added successfully!" << endl;
        }
        else if(choice == 2){
            cout << "\nName\tRoll\tTotal\tPercentage\tGrade" << endl;
            for(i=0; i<count; i++){
                cout << names[i] << "\t" << rollNo[i] << "\t" << total[i] 
                     << "\t" << percentage[i] << "%\t\t" << grade[i] << endl;
            }
        }
        else if(choice == 3){
            cout << "Enter roll number: ";
            cin >> searchRoll;
            found = 0;
            for(i=0; i<count; i++){
                if(rollNo[i] == searchRoll){
                    cout << "Name: " << names[i] << endl;
                    cout << "Total: " << total[i] << "/500" << endl;
                    cout << "Percentage: " << percentage[i] << "%" << endl;
                    cout << "Grade: " << grade[i] << endl;
                    found = 1;
                    break;
                }
            }
            if(found == 0) cout << "Student not found!" << endl;
        }
        else if(choice == 4){
            cout << "Exiting!" << endl;
        }

    } while(choice != 4);

    return 0;
}
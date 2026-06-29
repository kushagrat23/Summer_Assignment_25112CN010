#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char names[50][50];
    int empId[50];
    float salary[50];
    int count, choice, i, searchId, found;
    count = 0;

    do{
        cout << "\n----- EMPLOYEE MANAGEMENT SYSTEM -----" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. View All Employees" << endl;
        cout << "3. Search Employee by ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter name: ";
            cin >> names[count];
            cout << "Enter employee ID: ";
            cin >> empId[count];
            cout << "Enter salary: ";
            cin >> salary[count];
            count++;
            cout << "Employee added successfully!" << endl;
        }
        else if(choice == 2){
            if(count == 0){
                cout << "No records found!" << endl;
            } else {
                cout << "\nName\tEmp ID\tSalary" << endl;
                for(i=0; i<count; i++){
                    cout << names[i] << "\t" << empId[i] << "\t" << salary[i] << endl;
                }
            }
        }
        else if(choice == 3){
            cout << "Enter employee ID to search: ";
            cin >> searchId;
            found = 0;
            for(i=0; i<count; i++){
                if(empId[i] == searchId){
                    cout << "Found! Name: " << names[i] << ", Salary: " << salary[i] << endl;
                    found = 1;
                    break;
                }
            }
            if(found == 0){
                cout << "Employee not found!" << endl;
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
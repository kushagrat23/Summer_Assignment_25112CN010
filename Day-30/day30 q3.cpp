#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char names[50][50], department[50][50];
    int empId[50];
    float salary[50];
    int count, choice, i, searchId, found;
    count = 0;

    do{
        cout << "\n----- MINI EMPLOYEE SYSTEM -----" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. View All Employees" << endl;
        cout << "3. Update Salary" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter name: ";
            cin >> names[count];
            cout << "Enter department: ";
            cin >> department[count];
            cout << "Enter employee ID: ";
            cin >> empId[count];
            cout << "Enter salary: ";
            cin >> salary[count];
            count++;
            cout << "Employee added!" << endl;
        }
        else if(choice == 2){
            cout << "\nID\tName\tDept\tSalary" << endl;
            for(i=0; i<count; i++){
                cout << empId[i] << "\t" << names[i] << "\t" 
                     << department[i] << "\t" << salary[i] << endl;
            }
        }
        else if(choice == 3){
            cout << "Enter employee ID: ";
            cin >> searchId;
            found = 0;
            for(i=0; i<count; i++){
                if(empId[i] == searchId){
                    cout << "Enter new salary: ";
                    cin >> salary[i];
                    cout << "Salary updated!" << endl;
                    found = 1;
                    break;
                }
            }
            if(found == 0) cout << "Employee not found!" << endl;
        }
        else if(choice == 4){
            cout << "Exiting!" << endl;
        }

    } while(choice != 4);

    return 0;
}
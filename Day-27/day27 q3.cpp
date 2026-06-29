#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char names[50][50];
    float basicSalary[50], bonus[50], deduction[50], netSalary[50];
    int count, choice, i;
    count = 0;

    do{
        cout << "\n----- SALARY MANAGEMENT SYSTEM -----" << endl;
        cout << "1. Add Employee Salary" << endl;
        cout << "2. View All Salaries" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter name: ";
            cin >> names[count];
            cout << "Enter basic salary: ";
            cin >> basicSalary[count];
            cout << "Enter bonus: ";
            cin >> bonus[count];
            cout << "Enter deduction: ";
            cin >> deduction[count];

            netSalary[count] = basicSalary[count] + bonus[count] - deduction[count];
            count++;
            cout << "Record added successfully!" << endl;
        }
        else if(choice == 2){
            if(count == 0){
                cout << "No records found!" << endl;
            } else {
                cout << "\nName\tBasic\tBonus\tDeduction\tNet Salary" << endl;
                for(i=0; i<count; i++){
                    cout << names[i] << "\t" << basicSalary[i] << "\t" << bonus[i] 
                         << "\t" << deduction[i] << "\t\t" << netSalary[i] << endl;
                }
            }
        }
        else if(choice == 3){
            cout << "Exiting program!" << endl;
        }
        else{
            cout << "Invalid choice!" << endl;
        }

    } while(choice != 3);

    return 0;
}
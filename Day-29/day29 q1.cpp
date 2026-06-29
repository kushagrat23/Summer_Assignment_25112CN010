#include <iostream>
using namespace std;
int main(){
    float num1, num2, result;
    int choice;

    do{
        cout << "\n----- CALCULATOR -----" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4){
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        if(choice == 1){
            result = num1 + num2;
            cout << "Result = " << result << endl;
        }
        else if(choice == 2){
            result = num1 - num2;
            cout << "Result = " << result << endl;
        }
        else if(choice == 3){
            result = num1 * num2;
            cout << "Result = " << result << endl;
        }
        else if(choice == 4){
            if(num2 == 0){
                cout << "Error: Division by zero!" << endl;
            } else {
                result = num1 / num2;
                cout << "Result = " << result << endl;
            }
        }
        else if(choice == 5){
            cout << "Exiting calculator!" << endl;
        }
        else{
            cout << "Invalid choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}
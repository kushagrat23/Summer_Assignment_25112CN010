#include <iostream>
using namespace std;
int main(){
    float balance, amount;
    int choice;
    balance = 1000;  // starting balance

    do{
        cout << "\n----- ATM MENU -----" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Current Balance = " << balance << endl;
        }
        else if(choice == 2){
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Deposit successful! New Balance = " << balance << endl;
        }
        else if(choice == 3){
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if(amount > balance){
                cout << "Insufficient balance!" << endl;
            } else {
                balance -= amount;
                cout << "Withdrawal successful! New Balance = " << balance << endl;
            }
        }
        else if(choice == 4){
            cout << "Thank you for using the ATM!" << endl;
        }
        else{
            cout << "Invalid choice! Try again." << endl;
        }

    } while(choice != 4);

    return 0;
}
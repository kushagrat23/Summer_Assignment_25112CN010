#include <iostream>
using namespace std;
int main(){
    char names[50][50];
    int accNo[50];
    float balance[50];
    int count, choice, i, searchAcc, found;
    float amount;
    count = 0;

    do{
        cout << "\n----- BANK ACCOUNT SYSTEM -----" << endl;
        cout << "1. Open Account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Check Balance" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter name: ";
            cin >> names[count];
            cout << "Enter account number: ";
            cin >> accNo[count];
            cout << "Enter initial deposit: ";
            cin >> balance[count];
            count++;
            cout << "Account created successfully!" << endl;
        }
        else if(choice == 2){
            cout << "Enter account number: ";
            cin >> searchAcc;
            found = 0;
            for(i=0; i<count; i++){
                if(accNo[i] == searchAcc){
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    balance[i] += amount;
                    cout << "Deposit successful! New balance: " << balance[i] << endl;
                    found = 1;
                    break;
                }
            }
            if(found == 0) cout << "Account not found!" << endl;
        }
        else if(choice == 3){
            cout << "Enter account number: ";
            cin >> searchAcc;
            found = 0;
            for(i=0; i<count; i++){
                if(accNo[i] == searchAcc){
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    if(amount > balance[i]){
                        cout << "Insufficient balance!" << endl;
                    } else {
                        balance[i] -= amount;
                        cout << "Withdrawal successful! New balance: " << balance[i] << endl;
                    }
                    found = 1;
                    break;
                }
            }
            if(found == 0) cout << "Account not found!" << endl;
        }
        else if(choice == 4){
            cout << "Enter account number: ";
            cin >> searchAcc;
            found = 0;
            for(i=0; i<count; i++){
                if(accNo[i] == searchAcc){
                    cout << "Balance: " << balance[i] << endl;
                    found = 1;
                    break;
                }
            }
            if(found == 0) cout << "Account not found!" << endl;
        }
        else if(choice == 5){
            cout << "Exiting!" << endl;
        }

    } while(choice != 5);

    return 0;
}
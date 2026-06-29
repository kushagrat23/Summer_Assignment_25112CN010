#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char names[50][50], phone[50][15];
    int count, choice, i, found;
    char searchName[50];
    count = 0;

    do{
        cout << "\n----- CONTACT MANAGEMENT SYSTEM -----" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. View All Contacts" << endl;
        cout << "3. Search Contact" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter name: ";
            cin >> names[count];
            cout << "Enter phone number: ";
            cin >> phone[count];
            count++;
            cout << "Contact added successfully!" << endl;
        }
        else if(choice == 2){
            cout << "\nName\tPhone" << endl;
            for(i=0; i<count; i++){
                cout << names[i] << "\t" << phone[i] << endl;
            }
        }
        else if(choice == 3){
            cout << "Enter name to search: ";
            cin >> searchName;
            found = 0;
            for(i=0; i<count; i++){
                if(strcmp(names[i], searchName) == 0){
                    cout << "Found! Phone: " << phone[i] << endl;
                    found = 1;
                    break;
                }
            }
            if(found == 0) cout << "Contact not found!" << endl;
        }
        else if(choice == 4){
            cout << "Exiting!" << endl;
        }

    } while(choice != 4);

    return 0;
}
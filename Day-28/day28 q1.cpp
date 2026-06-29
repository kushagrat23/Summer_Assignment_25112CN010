#include <iostream>
using namespace std;
int main(){
    char bookName[50][50];
    int bookId[50], available[50];
    int count, choice, i, searchId, found;
    count = 0;

    do{
        cout << "\n----- LIBRARY MANAGEMENT SYSTEM -----" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. View All Books" << endl;
        cout << "3. Issue Book" << endl;
        cout << "4. Return Book" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter book name: ";
            cin >> bookName[count];
            cout << "Enter book ID: ";
            cin >> bookId[count];
            available[count] = 1;  // 1 = available
            count++;
            cout << "Book added successfully!" << endl;
        }
        else if(choice == 2){
            cout << "\nID\tName\tStatus" << endl;
            for(i=0; i<count; i++){
                cout << bookId[i] << "\t" << bookName[i] << "\t" 
                     << (available[i] == 1 ? "Available" : "Issued") << endl;
            }
        }
        else if(choice == 3){
            cout << "Enter book ID to issue: ";
            cin >> searchId;
            found = 0;
            for(i=0; i<count; i++){
                if(bookId[i] == searchId){
                    if(available[i] == 1){
                        available[i] = 0;
                        cout << "Book issued successfully!" << endl;
                    } else {
                        cout << "Book is already issued!" << endl;
                    }
                    found = 1;
                    break;
                }
            }
            if(found == 0) cout << "Book not found!" << endl;
        }
        else if(choice == 4){
            cout << "Enter book ID to return: ";
            cin >> searchId;
            found = 0;
            for(i=0; i<count; i++){
                if(bookId[i] == searchId){
                    available[i] = 1;
                    cout << "Book returned successfully!" << endl;
                    found = 1;
                    break;
                }
            }
            if(found == 0) cout << "Book not found!" << endl;
        }
        else if(choice == 5){
            cout << "Exiting!" << endl;
        }

    } while(choice != 5);

    return 0;
}
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char bookName[50][50], author[50][50];
    int bookId[50], available[50];
    int count, choice, i, searchId, found;
    count = 0;

    do{
        cout << "\n----- MINI LIBRARY SYSTEM -----" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. View All Books" << endl;
        cout << "3. Issue/Return Book" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter book name: ";
            cin >> bookName[count];
            cout << "Enter author: ";
            cin >> author[count];
            cout << "Enter book ID: ";
            cin >> bookId[count];
            available[count] = 1;
            count++;
            cout << "Book added!" << endl;
        }
        else if(choice == 2){
            cout << "\nID\tBook\tAuthor\tStatus" << endl;
            for(i=0; i<count; i++){
                cout << bookId[i] << "\t" << bookName[i] << "\t" << author[i] << "\t"
                     << (available[i] == 1 ? "Available" : "Issued") << endl;
            }
        }
        else if(choice == 3){
            cout << "Enter book ID: ";
            cin >> searchId;
            found = 0;
            for(i=0; i<count; i++){
                if(bookId[i] == searchId){
                    available[i] = !available[i];   // toggle status
                    cout << "Status changed to: " << (available[i] == 1 ? "Available" : "Issued") << endl;
                    found = 1;
                    break;
                }
            }
            if(found == 0) cout << "Book not found!" << endl;
        }
        else if(choice == 4){
            cout << "Exiting!" << endl;
        }

    } while(choice != 4);

    return 0;
}
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char itemName[50][50];
    int itemId[50], quantity[50];
    float price[50];
    int count, choice, i, searchId, found, qty;
    count = 0;

    do{
        cout << "\n----- INVENTORY MANAGEMENT -----" << endl;
        cout << "1. Add Item" << endl;
        cout << "2. View All Items" << endl;
        cout << "3. Update Quantity" << endl;
        cout << "4. Remove Item" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter item name: ";
            cin >> itemName[count];
            cout << "Enter item ID: ";
            cin >> itemId[count];
            cout << "Enter quantity: ";
            cin >> quantity[count];
            cout << "Enter price: ";
            cin >> price[count];
            count++;
            cout << "Item added successfully!" << endl;
        }
        else if(choice == 2){
            cout << "\nID\tName\tQty\tPrice" << endl;
            for(i=0; i<count; i++){
                cout << itemId[i] << "\t" << itemName[i] << "\t" 
                     << quantity[i] << "\t" << price[i] << endl;
            }
        }
        else if(choice == 3){
            cout << "Enter item ID: ";
            cin >> searchId;
            found = 0;
            for(i=0; i<count; i++){
                if(itemId[i] == searchId){
                    cout << "Enter new quantity: ";
                    cin >> qty;
                    quantity[i] = qty;
                    cout << "Quantity updated!" << endl;
                    found = 1;
                    break;
                }
            }
            if(found == 0) cout << "Item not found!" << endl;
        }
        else if(choice == 4){
            cout << "Enter item ID to remove: ";
            cin >> searchId;
            found = 0;
            for(i=0; i<count; i++){
                if(itemId[i] == searchId){
                    // shift everything after this index back by one
                    for(int j=i; j<count-1; j++){
                        itemId[j] = itemId[j+1];
                        quantity[j] = quantity[j+1];
                        price[j] = price[j+1];
                        strcpy(itemName[j], itemName[j+1]);
                    }
                    count--;
                    cout << "Item removed successfully!" << endl;
                    found = 1;
                    break;
                }
            }
            if(found == 0) cout << "Item not found!" << endl;
        }
        else if(choice == 5){
            cout << "Exiting!" << endl;
        }

    } while(choice != 5);

    return 0;
}
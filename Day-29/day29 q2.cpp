#include <iostream>
using namespace std;
int main(){
    int arr[100], n, choice, i, sum, largest, smallest, key, found;
    n = 0;

    do{
        cout << "\n----- ARRAY OPERATIONS -----" << endl;
        cout << "1. Input Array" << endl;
        cout << "2. Display Array" << endl;
        cout << "3. Find Sum" << endl;
        cout << "4. Find Largest" << endl;
        cout << "5. Find Smallest" << endl;
        cout << "6. Search Element" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter size: ";
            cin >> n;
            for(i=0; i<n; i++){
                cout << "Enter element " << i+1 << ": ";
                cin >> arr[i];
            }
        }
        else if(choice == 2){
            cout << "Array: ";
            for(i=0; i<n; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else if(choice == 3){
            sum = 0;
            for(i=0; i<n; i++){
                sum += arr[i];
            }
            cout << "Sum = " << sum << endl;
        }
        else if(choice == 4){
            largest = arr[0];
            for(i=1; i<n; i++){
                if(arr[i] > largest) largest = arr[i];
            }
            cout << "Largest = " << largest << endl;
        }
        else if(choice == 5){
            smallest = arr[0];
            for(i=1; i<n; i++){
                if(arr[i] < smallest) smallest = arr[i];
            }
            cout << "Smallest = " << smallest << endl;
        }
        else if(choice == 6){
            cout << "Enter element to search: ";
            cin >> key;
            found = 0;
            for(i=0; i<n; i++){
                if(arr[i] == key){
                    cout << "Found at index " << i << endl;
                    found = 1;
                    break;
                }
            }
            if(found == 0) cout << "Not found!" << endl;
        }
        else if(choice == 7){
            cout << "Exiting!" << endl;
        }

    } while(choice != 7);

    return 0;
}
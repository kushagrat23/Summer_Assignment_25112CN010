#include <iostream>
using namespace std;
int main(){
    char passengerName[50][50];
    int seatNo[50], booked[50];
    int totalSeats, count, choice, i, searchSeat, found;
    count = 0;
    totalSeats = 10;

    for(i=0; i<totalSeats; i++){
        booked[i] = 0;
    }

    do{
        cout << "\n----- TICKET BOOKING SYSTEM -----" << endl;
        cout << "1. Book Ticket" << endl;
        cout << "2. View Bookings" << endl;
        cout << "3. Cancel Ticket" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter seat number (1-" << totalSeats << "): ";
            cin >> searchSeat;
            if(searchSeat < 1 || searchSeat > totalSeats){
                cout << "Invalid seat number!" << endl;
            }
            else if(booked[searchSeat-1] == 1){
                cout << "Seat already booked!" << endl;
            } else {
                cout << "Enter passenger name: ";
                cin >> passengerName[count];
                seatNo[count] = searchSeat;
                booked[searchSeat-1] = 1;
                count++;
                cout << "Ticket booked successfully!" << endl;
            }
        }
        else if(choice == 2){
            cout << "\nSeat No\tPassenger Name" << endl;
            for(i=0; i<count; i++){
                cout << seatNo[i] << "\t" << passengerName[i] << endl;
            }
        }
        else if(choice == 3){
            cout << "Enter seat number to cancel: ";
            cin >> searchSeat;
            found = 0;
            for(i=0; i<count; i++){
                if(seatNo[i] == searchSeat){
                    booked[searchSeat-1] = 0;
                    cout << "Ticket cancelled successfully!" << endl;
                    found = 1;
                    break;
                }
            }
            if(found == 0) cout << "Booking not found!" << endl;
        }
        else if(choice == 4){
            cout << "Exiting!" << endl;
        }

    } while(choice != 4);

    return 0;
}
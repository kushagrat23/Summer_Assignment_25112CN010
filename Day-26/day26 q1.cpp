#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int secretNumber, guess, attempts;
    attempts = 0;

    srand(time(0));               // seed random generator
    secretNumber = rand() % 100 + 1;   // random number 1-100

    cout << "Guess a number between 1 and 100!" << endl;

    do{
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if(guess > secretNumber){
            cout << "Too high! Try again." << endl;
        }
        else if(guess < secretNumber){
            cout << "Too low! Try again." << endl;
        }
        else{
            cout << "Correct! You guessed it in " << attempts << " attempts!" << endl;
        }

    } while(guess != secretNumber);

    return 0;
}
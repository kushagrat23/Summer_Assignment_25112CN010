#include <iostream>
using namespace std;
int main(){
    int score, answer;
    score = 0;

    cout << "----- QUIZ TIME -----" << endl;

    cout << "\nQ1. What is the capital of France?" << endl;
    cout << "1. London  2. Paris  3. Berlin  4. Rome" << endl;
    cout << "Enter choice: ";
    cin >> answer;
    if(answer == 2){
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! Correct answer: Paris" << endl;
    }

    cout << "\nQ2. Which language is used for web styling?" << endl;
    cout << "1. HTML  2. CSS  3. C++  4. Python" << endl;
    cout << "Enter choice: ";
    cin >> answer;
    if(answer == 2){
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! Correct answer: CSS" << endl;
    }

    cout << "\nQ3. What is 5 + 3 * 2?" << endl;
    cout << "1. 16  2. 11  3. 13  4. 10" << endl;
    cout << "Enter choice: ";
    cin >> answer;
    if(answer == 2){
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! Correct answer: 11" << endl;
    }

    cout << "\n----- QUIZ FINISHED -----" << endl;
    cout << "Your Score: " << score << "/3" << endl;

    return 0;
}
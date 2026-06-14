#include <iostream>
using namespace std;
int main(){
    int n, count;
    count = 0;

    cout << "Enter a number: ";
    cin >> n;

    while(n != 0){
        if(n % 2 == 1){
            count++;
        }
        n /= 2;
    }

    cout << "Set bits = " << count << endl;

    return 0;
}
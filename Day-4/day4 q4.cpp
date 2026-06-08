#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int start, end, i, n, digit, sum, count, temp;

    cout << "Starting range: ";
    cin >> start;
    cout << "Ending range: ";
    cin >> end;

    for(i=start; i<=end; i++){
        sum = 0;
        count = 0;
        n = i;
        temp = n;
       
        while(temp != 0){
            count++;
            temp /= 10;
        }

        while(n != 0){
            digit = n % 10;
            sum += pow(digit, count);
            n /= 10;
        }

        if(sum == i)
            cout << i << " ";
    }

    return 0;
}
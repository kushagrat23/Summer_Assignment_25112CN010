#include <iostream>
using namespace std;

int main(){
    int N, Count = 0;
    cout << "Number ? ";
    cin >> N;

    if(N < 0) N = -N; 
if(N == 0){
        cout << "Number of digits is 1";
        return 0;
    }
while(N != 0){     
        N /= 10;
        Count++;
    }

    cout << "Number of digits is " << Count;
    return 0;
}
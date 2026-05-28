#include <iostream>
using namespace std;
int main(){
int N, i , fact = 1;
cout << "Number ?";
cin >> N;
for(i=1; i<=N; i++){
    fact *= i;
} 
cout << "Factorial is " << fact;
return 0;

}
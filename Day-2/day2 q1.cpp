#include <iostream>
using namespace std;
int main(){
int N , sum =0 , rem;
cout << "Number ?";
cin >> N;
if(N < 0){ 
N = -N;
cout << "N is negative" << endl; }
while(N !=0){
    rem = N % 10;
    sum += rem;
    N /= 10;

}    
cout << "Sum of digits is " << sum;    
return 0;

}
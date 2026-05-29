#include <iostream>
using namespace std;
int main(){
int N , prod = 1 , rem;
cout << "Number ?";
cin >> N;
if(N<0){
    cout << "Number is negative " << endl;
}   
while(N!=0){
    rem = N % 10;
    prod *= rem;
    N /= 10;
}
cout << "Product of digits is " << prod;
return 0;

}




#include <iostream>
using namespace std;
int main(){
int N , rev = 0 , rem;
cout << "Number ?";
cin >> N;
if(N<0){
    cout << "N is negatice " << endl;

}
while(N!=0){
    rem = N%10;
    rev = rev * 10 + rem;
    N /= 10;

}
cout << "Reverse of number is "<< rev;
return 0;





}


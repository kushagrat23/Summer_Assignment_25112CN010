#include <iostream>
using namespace std;
int main(){
int N , rev = 0 , rem , N1;
cout << "Number ?";
cin >> N;
if(N<0){
    cout << "N is negative " << endl;
}
N1=N;
while(N1!=0){
    rem = N1 % 10;
    rev = rev * 10 + rem;
    N1 /= 10;
}
if(rev == N){
    cout << "Number is palindrome";
}
else{
    cout << "Number is not palindrome";

}
return 0;

}








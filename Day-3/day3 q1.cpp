#include <iostream>
using namespace std;
int main(){
int N , prime = 1 , i;
cout << "Number ?";
cin >> N;
if(N <=1){
prime = 0;
}
for(i=2 ; i <= N/2 ; i++){
    if(N % i == 0 )
    {
        prime = 0;
       
    }
    }
    if( prime ==1){
        cout << "N is prime number";
}
else {
    cout << "N is not a prime number";
}
return 0;
}

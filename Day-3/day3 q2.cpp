#include <iostream>
using namespace std;
int main(){
int N , i , j , start , end , prime = 1;
cout << "Starting range ";
cin >> start;
cout << "Ending range ";
cin >> end;
for( i=start ; i <= end; i++){
    prime = 1;
    if( i<=1){
        prime = 0;
    }
for(j=2 ; j <= i/2 ; j++){
        if ( i % j == 0){
            prime = 0;
        }
    }
    if( prime ==1){
        cout << i << "" << endl;
    }
}
return 0;
}



#include <bits/stdc++.h>
using namespace std;
int main(){
int marks;
cout << "Enter your marks : " << endl;
cin >> marks;
if ( marks >= 80 && marks <= 100 ){
    cout << " A " << endl;
}
else if ( marks >= 60 ){
    cout << " B "<< endl;
}
else if ( marks >= 50){
    cout << " C " << endl;
}
else if ( marks  >= 45 ){
    cout << " D " << endl;

}
else if ( marks >= 25 ){
cout << " E " << endl;
}
else if ( marks < 25 ){
    cout << " F loser " << endl;
}
 return 0;
}
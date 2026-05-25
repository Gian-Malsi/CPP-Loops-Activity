#include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number to start countdown: ";
cin>>n;
if(!n>0){cout<<"Invalid Input! Please enter a number greater than 0.";return 0;}
for(;n;){cout<<n--<<" ";}
return 0;}
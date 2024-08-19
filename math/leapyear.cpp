#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int n;
   cin>>n;
  //leap year is here 
  //if it is divisible by 400 then goof 
  if(n%400==0){
      cout<<"yes";
  }
  else if((n%4==0) && (n%100!=0)) cout<<"yes";
  else cout<<"no";
}    
    
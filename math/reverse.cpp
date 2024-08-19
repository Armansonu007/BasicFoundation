#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int n;
   cin>>n;
   //now my next question is to reverse the digits
   int res=0;
   while(n!=0){
       int rem=n%10;
       res=res*10+rem;
       n/=10;
   }
   cout<<res;
}    
    
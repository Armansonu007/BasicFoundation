#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int n;
   cin>>n;
   int m, q;
   cin>>m>>q;
   //three condition 
   if(n>m && n>q){
       cout<<n;
   }
   else if(m>n && m>q){
       cout<<m;
   }
   else{
       cout<<q;
   }
}    
    
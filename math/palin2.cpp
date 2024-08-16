#include <iostream>
using namespace std;
//time complexity for this is log10(num) digit ke barabar chal rha hai 
//spce complexity : constant space that means O(1) constant space 

bool palin(int n){
    int check=n;
    int ans=0;
    while(n!=0){
        int rem=n%10;
        ans=ans*10+rem;
        n/=10;
    }
    if(check==ans) return true;
    else return false;
}

int main() {
   //now next question comes how to find the palindromes in the range of number 
   //right 
   int n,m;
   cin>>n>>m;
   for(int i=n+1;i<m;i++){
       
       //what will be the time complexity of this question 
       //the loop will go from the range 
       //time complexity : O(m-n+1)* log10(n)
       //space complexity :O(1) constant space keep this in mind 
       if(palin(i)){
           cout<<i<<" ";
       }
   }
	
}
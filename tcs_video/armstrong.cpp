#include <bits/stdc++.h>
using namespace std;

int main() {

	//given an integer n return if its armstrong or not 
	int n;
	cin>>n;
	
	//logic for checking ig it is armstrong or not 
	//likely to get the integer and cube and add them to check if its equal then good other 
	//wise it is not    
	
	//first i have to find the count of digits 
	int temp=n;
	int ct=0;
	while(n!=0){
	    int rem=n%10;
	    ct++;
	    n/=10;
	}
	
	n=temp;
	int sum=0;
	
	while(n!=0){
	    int rem=n%10;
	    sum+=pow(rem, ct);
	    n/=10;
	}
	
	
	
	if(sum==temp) cout<<"y";
	else cout<<"n";
	
	
	
	
	
	      
}
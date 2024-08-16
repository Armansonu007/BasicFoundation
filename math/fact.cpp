#include <iostream>
#include<vector>
using namespace std;

int main() {
	//how to find the factorial of number 
	//this is complete basic appraoch in which 
	//we use a loop to multiply till we get the value 
	//further can it optimised ?? by any means 
	//answer is yes 
	int n ;
	cin>>n;
	vector<int>fact(n+1);
	fact[0]=1;
	for(int i=1;i<=n;i++){
	    fact[i]=i*fact[i-1];
	}
	cout<<fact[n];
}
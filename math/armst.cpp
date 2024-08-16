#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin>>n;
	//to check if number is armstrong or not 
	//what is armstrog number first 
	//what this question says is that 
	//each dgits raised to its number of digits in the numbers sums equal to get the result 
	//then how to solve this question
	//i think first i have to find the number of digits then 
	//pick one digit make it raise to it and get the result 
	//time and space complexity for this question is that 
	//time =log10(num);
	//spce = i have not used anything so it is constant spcae
	int ori=n;
	int ct=0;
	while(n!=0){
	    ct++;
	    n/=10;
	}
	int ans=0;
	n=ori;
	while(n!=0){
	    int rem=n%10;
	    ans=ans+pow(rem, ct);
	    n=n/10;
	}
	
	cout<<ans<<" ";
	if(ans==ori) cout<<"yes";
	else cout<<"no";
	
	
}
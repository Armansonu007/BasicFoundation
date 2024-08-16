#include <iostream>
using namespace std;

int main() {
	//to check whether the number is prime or not 
	int n;
	cin>>n;
	//just check if it is divisible by any other number 
	//then it is not prime number 
	//basic what is prime number: number divisible by only 1 and itself
	//this is basic approach but this can be optimise but how 
	//this time complexity is O(n) time complexity 
	//12 
	//1* 12 .. 2*6 ..3*4 .. 4*3 ..6*2.. 12*1
	//we can also reduced our check on the basis of logic of half if it can be divide one of the 
	//key memebers then it can also be divided by it
	//time and space complexity is O(rootn) and space is constant space 
	
	bool flag=true;
	for(int i=2;i*i<n;i++){
	    if(n%i==0){
	        flag=false;
	    }
	    
	}
	if(flag) cout<<"yes";
	else cout<<"no";
	
	return 0;
}
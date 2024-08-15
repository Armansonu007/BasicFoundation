#include <iostream>
#include<vector>
#include<cmath>
#include<climits>

using namespace std;

int main() {
	
	//now the second question is how to find the second largest element
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	//now my algorithm goes here
	//first i have to find the maximum then only i can find the second maximum
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
	   maxi=max(maxi, arr[i]);
	}
	int maxi2=INT_MIN;
	for(int i=0;i<n;i++){
	    //what point you can remember is that 
	    //during  checking the problem 
	    //alwys keep in knowldege to compare the arr[i] elements with the the varible value you have taken 
	    //right got it 
	    if(arr[i]>maxi2 && arr[i]<maxi){
	        maxi2=arr[i];
	    }
	}
	cout<<maxi2;
	
}
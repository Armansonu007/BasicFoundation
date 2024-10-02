#include <bits/stdc++.h>
using namespace std;

int main() {
	//number of subarray whose sum equals to k 
	int n;
	cin>>n;
	int k;
	cin>>k;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	for(auto &it : arr){
	    cout<<it<<" ";
	}
	cout<<endl;
	//applying the logics 
	int sum=0;
	unordered_map<int, int>mp;
	int ct=0;
	// commmulative sum -- frequency of times it occurs 
	mp[0]=1;
	//keep this in mind that 
	//to put the fequency of 0 as 1 
	for(int i=0;i<n;i++){
	    sum+=arr[i];
	    
	    //find karo 
	    //logic is that sum-k==arr[i] that may exits in the subarray of time subarray
	    //keep this in mind here we will add the frequency of values
	    if(mp.find(sum-k)!=mp.end()){
	        ct+=mp[sum-k];
	    }
	    //update
	    mp[sum]++;
	}
	
	cout<<ct;
	
	      
}
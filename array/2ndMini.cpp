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
	//now i  have question if i want to find the 2nd smalles element then how it could be 
	int mini=INT_MAX;
	for(auto &it : arr){
	    mini=min(mini , it);
	}
	//then second minimum how it can be found
	int mini_sec=INT_MAX;
	for(auto &it: arr){
	    if(it<mini_sec && it>mini){
	        mini_sec=it;
	    }
	}
	cout<<mini<<endl;
	cout<<mini_sec;
}
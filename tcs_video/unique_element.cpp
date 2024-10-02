#include <bits/stdc++.h>
using namespace std;

int main() {
	string input;
	getline(cin, input);
	//remove the square bracket
	for(int i=0;i<input.size();i++){
	    if(input[i]=='[' || input[i]==']'){
	        input[i]=' ';
	    }
	}
	stringstream ss(input);
	string temp;
	
	vector<int>arr;
	while(getline(ss, temp, ',')){
	    if(!temp.empty()){
	        //convert string to integer 
	       arr.push_back(stoi(temp)); 
	    }
	}
	
	//now we have prepared our data
	for(auto &it : arr){
	    cout<<it<<" ";
	}
	cout<<endl;
	//now the question is that i have to find the sum of unique elemnets only 
	
	//then first i have to get the frequency of each elemnets
	int n=arr.size();
	unordered_map<int, int>mp;
	for(int i=0;i<n;i++){
	    int el=arr[i];
	    mp[el]++;
	}
	int sum=0;
	for(int i=0;i<n;i++){
	    if(mp[arr[i]]==1){
	        sum+=arr[i];
	    }
	}
	
	cout<<sum;
	
	
	
	
	
	
	
	      
}
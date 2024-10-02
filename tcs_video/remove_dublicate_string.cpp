#include <bits/stdc++.h>
using namespace std;

int main() {

	//remove dublicates from the string 
	
	string input;
	getline(cin, input);
	stringstream ss(input);
	string temp;
	vector<string>arr;
	while(getline(ss, temp, ' ')){
	    if(!temp.empty())
	    arr.push_back(temp);
	}
	
	
// 	for(auto &it : arr){
// 	    cout<<it<<" ";
// 	}
// 	cout<<endl;
	
	
	//whever there is question of dublicates 
	//we can use the set or map
	unordered_set<string>st;
	vector<string>ans;
	for(auto &it : arr){
	    //if it is not prsent then only print
	    if(st.find(it)==st.end()){
	       ans.push_back(it); 
	    }
	    st.insert(it);
	}
	
	
	sort(ans.begin(), ans.end(), greater<string>());
	
	for(auto &it : ans){
	    cout<<it<<" ";
	}
	cout<<endl;
	
	
	      
}
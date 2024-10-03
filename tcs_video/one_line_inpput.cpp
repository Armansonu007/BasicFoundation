#include <bits/stdc++.h>
using namespace std;


 
//next question is taking the input in one line and separating them according ot the quetion


int main() {
    string input;
    getline(cin, input);
    
    //first index indicates the value that we have to return 
    //that is int top students
    //second inex denotes the number of the candidates will be
    //what i can do is use ss stream to seprate each part and put this into a array of string 
    //then i can access easily each of them 
    stringstream ss(input);
    string temp;
    vector<string>arr;
    while(getline(ss, temp, ' ')){
        if(!temp.empty()){
            arr.push_back(temp);
        }
    }
    
    //since i know first index will be integer so i have to convert it into the intger usig stoi function
    
    int top=stoi(arr[0]);
    int num=stoi(arr[1]);
   
    //also i have to give the top scoring banda
    //so i have to short
    ///and before sorting i have to store these values
    
    // for(int i=2;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
    vector<pair<int, string>>ans;
    for(int i=2;i<arr.size();i+=2){
        int num=stoi(arr[i]);
        string name=arr[i+1];
        pair<int, string>p={num, name};
        ans.push_back(p);
    }
	
// 	for(auto it: ans){
// 	    cout<<it.first<<" "<<it.second<<" ";
// 	}
	//now i have store the required data next thing that i have to do is 
	//that sort 
	
	sort(ans.begin(), ans.end(), greater<pair<int, string>>());
	for(int i=0;i<top;i++){
	    cout<<ans[i].first<<" "<<ans[i].second<<" ";
	    cout<<'\n';
	}
	
	      
}
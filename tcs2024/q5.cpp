//remove dublicates from the string 
//then we will solve the question of array strings
#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    getline(cin, input);
    stringstream ss(input);
    string temp;
    vector<string>str;
    while(getline(ss, temp, ' ')){
        //push_back kar skate hai if  vector of string ho to
        str.push_back(temp);
    }
    set<string>st;
    for(auto &it : str){
        st.insert(it);
    }
    //vector me dalo
    vector<string>ans;
    for(auto &it : st){
        ans.push_back(it);
    }
    //for decreaseing order
    sort(ans.begin(), ans.end(), greater<string>());
    for(auto &it: ans){
        cout<<it<<" ";
    }
}
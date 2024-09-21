//reverse a word in a string 
//means i will have the array of string string
#include<bits/stdc++.h>
using namespace std;

 
int main(){
    //reverse the string 
    string input;
    //take the input
    getline(cin, input);
    stringstream ss(input);
    vector<string>str;
    string temp;
    while(getline(ss, temp, ' ')){
        str.push_back(temp);
    }
    //logic 
    stack<string>st;
    for(auto &it : str){
        st.push(it);
    }
    //nikal ke daal do answer me 
    string ans;
    while(!st.empty()){
        string fr=st.top();
        st.pop();
        //last wale ke liye ye empty ho jega 
        //
        ans+=fr;
        if(!st.empty()){
            //this case is for the space only
            ans+=" ";
        }
    }
        
    cout<<ans;
}
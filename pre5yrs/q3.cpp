//this question is based on the check the longest word size 
//lets suppose we have given the vector of strings and we have to calculate the max length of string 
//lets suppose we have given input like comma separeated inputs
#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    //comma separeated input ko v to lena hi hoga na 
    getline(cin, input);
    //now we have comma separated input 
    //we have to just put this input vector of strings
    vector<string>str;
    stringstream ss(input);
    //variable
    string temp;
    int maxi=INT_MIN;
    while(getline(ss, temp, ',')){
        
        int s=temp.size();
        maxi=max(maxi, s);
        str.push_back(temp);
    }
    cout<<maxi;
    cout<<endl;
    for(auto &it: str){
        cout<<it;
    }
}
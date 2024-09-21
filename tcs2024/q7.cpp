#include<bits/stdc++.h>
using namespace std;
string  func(vector<int>arr){
    string ans="";
    for(auto &it: arr){
        if(it%3==0 && it%5==0){
            ans+="ThreeFive ";
        }
        else if(it%3==0){
            ans+="Three ";
        }
        else if(it%5==0){
            ans+="Five ";
        }
        else{
            //here you are not adding the space 
            //keep the input format in mind 
            ans+=to_string(it)+ " ";
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string input;
    getline(cin, input);
    for(int i=0;i<input.size();i++){
        if(input[i]=='[' || input[i]==']'){
            input[i]=' ';
        }
    }
 
    stringstream ss(input);
    string temp;
    //you cant initailise the vector and then start push push_back
    //the reason is if you initalise then 
    //it will automcatically take the input 0 by default 
    vector<int>arr;
    while(getline(ss, temp, ' ')){
        //string to integer keep this in mind
        //to check if it is space or not_eq
        if(!temp.empty()){
            arr.push_back(stoi(temp));
        }
        
    }
    //after that our logic
    string ans=func(arr);
    cout<<ans;
}
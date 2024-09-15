//sum of the pair is divisible by 2
//we have to find the count of pairs
#include<bits/stdc++.h>
using namespace std;
int main(){
    //now the problem is if input how many times it shoul be not given then how should i do it 
    int input;
    vector<int>arr;
    while(cin>>input){
        arr.push_back(input);
    }
    int n=arr.size();
    unordered_map<int, bool>st;
    int ct=0;
    map<pair<int, int>, bool>mp;
    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            int a=arr[i];
            int b=arr[j];
            int c=a+b;
            pair<int, int>p=make_pair(a,b);
            if(c%2==0 && mp[p]==false){
                ct++;
               mp[p]=true;
            }
               
            
        }
        
    }
    // cout<<ct;
    for(auto &it: arr){
        cout<<it<<" ";
    }
}
//this question is simple what we have gievn is simple things
//we have just calcuate the sum of unique eleemtns
#include<bits/stdc++.h>
using namespace std;
int main(){
    //sum of unique elements 
    string input;
    getline(cin, input);
    stringstream ss(input);
    string temp;
    vector<int>arr;
    while(getline(ss, temp , ',')){
        arr.push_back(stoi(temp));
    }
    //how to get the unique elements 
    //best way i can do is to make the unordered_mp
    unordered_map<int ,int>mp;
    for(auto &it: arr){
        mp[it]++;
    }
    int sum=0;
    for(auto &it:  mp){
        if(it.second==1){
            sum+=it.first;
        }
    }
    cout<<sum;
    return 0;
}
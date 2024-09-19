//subarray based complete set of questions 
//1st question is basic 
//if we have given a array and a sum 
//and we have to calculate the largest window size 
//then how can we calculate the lrgest 
#include<bits/stdc++.h>
using namespace std;
vector<int>func(vector<int>arr, int s){
    int n=arr.size();
    int i=0;
    int sum=0;
    int j=0;
    while(j<n){
        //calculation 
        sum+=arr[j];
        //answer
        if(sum>s){
            while(i<j && sum>s){
                sum-=arr[i];
                i++;
            }
        }
        
        if(sum==s){
            return {i+1, j+1};
        }
        j++;
    }
    return {-1};
}


int main(){
    
    string str;
    getline(cin, str);
    stringstream ss(str);
    vector<int>arr;
    string temp;
    while(getline(ss, temp, ',')){
        
            arr.push_back(stoi(temp));
       
    }
    //now the logic for the 
    int s;
    cin>>s;
    vector<int> res=func(arr, s);
    for(auto &it: res){
        cout<<it<<" ";
    }
    
}
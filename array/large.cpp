#include<bits/stdc++.h>
using namespace std;
//here the learning things is that the try include climits which gives us the 
//facility to use the INT_MAX OR INT_MIN
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //find the smallest and largest number 
   int gt=INT_MIN;
    
    for(auto &it : arr){
       gt=max(gt, it);
    }
    cout<<gt;
    return 0;
    
}
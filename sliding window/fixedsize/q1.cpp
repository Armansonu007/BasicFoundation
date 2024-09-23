#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(auto &it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
    //logic 
    int i=0;
    int j=0;
    deque<int>dq;
    while(j<n){
       //calculation 
       //before pushing chek the cirteria
       //single criteria if q.back()<arr[j]
       //remove till this 
       while(!dq.empty() && arr[dq.back()]<arr[j]){
           dq.pop_back();
       }
       dq.push_back(j);
       
       //asnwer
       if(j-i+1==k){
           cout<<arr[dq.front()]<<" ";
           //window resize for the noexc
           if(dq.front()==i){
               dq.pop_front();
           }
           i++;
       }
       j++;
    }
    
    
    
    
    
    return 0;
}
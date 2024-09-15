#include<bits/stdc++.h>
using namespace std;
int func(int n){
    int ans=n;
    for(int i=n-1;i>0;i--){
        int sum=0;
        for(int j=0;j<i;j++){
            sum+=ans;
        }
        //next time sum jo hai add hoga n-1 times
        ans=sum;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    
    cout<<func(n);
    return 0;
}
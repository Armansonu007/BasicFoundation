#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int temp=n;
    while(n!=0){
        int rem=n%10;
        sum=sum*10+rem;
        n/=10;
    }
    if(temp==sum) cout<<"yes";
    else cout<<"no";
}
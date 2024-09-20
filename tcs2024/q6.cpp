//armstrogn number
#include<bits/stdc++.h>
using namespace std;
bool func(int n){
    int temp=n;
    int sum=0;
    while(n!=0){
        int rem=n%10;
        sum+=pow(rem, 3);
        n/=10;
    }
    if(sum==temp) return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    if(func(n)) cout<<"true";
    else cout<<"false";
}
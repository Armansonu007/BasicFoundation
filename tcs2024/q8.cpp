//given an integer an wwe need to calculate the sum of values of that table
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //hwo to calculate the table 
    //num *1 , num * 2, num*3
    int sum=0;
    for(int i=1;i<=10;i++){
        sum+=n*i;
    }
    cout<<sum;
}

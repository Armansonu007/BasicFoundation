
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans=0;
    //now the next question is i have given a number and i want to check if it is perfect square right?
    //a perfect sqaure means take the factors of it add it and check it if it is eqal or not 
    for(int i=1;i*i<=n;i++){
        //keep this edge case in mind that is if i==1 that means its cmplimentary will be n/i
        //but we have to add only one time sqaure
        //2nd thig is that during the prime check we were including the i*i so in this case also 
        //we have to add i one times only 
        //so keeo this line also in mind
        if(i==1 || i*i==n){
            ans+=i;
        }
        else if(n%i==0){
            ans+=i+n/i;
        }
        
    }
    if(ans==n){
        cout<<"yes";
    }
    else cout<<"no";
    
    
}

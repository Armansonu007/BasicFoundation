#include <iostream>
#include <cmath>
using namespace std;

  

int main() {
    int n;
    cin >> n;
    //now this question is based on math also 
    //it says that you have to replace the 0s with 1 the number giveis
    //so you have number gievn and question asked you to replace the 0 with one
    //logic building is how to make a number with front partwith
    int placeValue=1; //that is one after 2nd iteration it will increase to 10->100->like this
    int result=0;
    bool flag=false;
    if(n<0){
        flag=true;
        n=abs(n);
    }
    while(n!=0){
        // so this is basic logic building how to get the number from the last but build it from the start 
        int remDigit=n%10;
        //now here i have to do minor change that is 
        //if got the remainder replace it with a 1 
        if(remDigit==0){
            remDigit=1;
        }
        result=result+remDigit*placeValue;
        
        placeValue*=10;
        n/=10;
    }
    if(flag){
        cout<<-result;
    }else{
        cout<<result;
    }
    
    
}

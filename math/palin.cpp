#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin>>n;
	//1st method using mathematical approch to solve this question
	//step : 1 keep the original number
	//here time and space complexity is log10(num) and space o(1);
// 	int origi=n;
// 	int ans=0;
// 	while(n!=0){
// 	    int rem=n%10;
// 	    ans=ans*10+rem;
// 	    //here to remove n should be divided
// 	    n/=10;
// 	}
// 	//i took 2 debug why mind was not opened 
// 	//keep in mind what are you doing 
// 	if(origi==ans) cout<<"yes";
// 	else cout<<"no";
	
	//2nd appraoch 
	//conver the number into the string 
	//keep in mind what are you assigning the problem solution 
	//to get the time and space complexity you should have idea abput how to find the 
	//total number of digits in the number that is log 10 base number
	//log base 10(number)
	//to convert the number into string it will take log10(num)
	//in the loop it will go till log10(n)/2
	//space will be also log10(number)
	//time complexity : log10(num)
	//space complexity: log10(num)
	string res=to_string(n);
	string ans="Yes";
	int i=0, j=res.size()-1;
	while(i<=j){
	    if(res[i]!=res[j]){
	        ans="No";
	        break;
	    }
	    i++;
	    j--;
	}
	cout<<ans;
	
	

}
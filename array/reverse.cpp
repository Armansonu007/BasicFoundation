#include <iostream>
#include<vector>
#include<cmath>
#include<climits>

using namespace std;

int main() {
	
	//now the second question is how to find the second largest element
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	//now the 4th question i have given the array and i need to reverse it 
	//right then how can i do
	//there are lots of ways to solve this problem 
	//i will use the basic appraoch is that in place
	//if i want to use only variable then also i can do this
// 	int i=0;
	
// 	while(i<n/2){
// 	    swap(arr[i++], arr[n-1-i]);
// 	}
//ther is also another logic that i can do like 
    //but in this logic i have to create answer vector or string to store the result
    string ans;
    for(int i=n-1;i>=0;i--){
        ans.push_back(arr[i]+'0');
        ans.push_back(' ');
    }
	cout<<ans;
}
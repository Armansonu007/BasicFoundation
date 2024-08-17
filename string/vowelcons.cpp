#include <iostream>
#include<string>
using namespace std;


int main() {
	
	string s;
	getline(cin,s);
	//to count the number of vowels and string
	//this is simple concept 
	//learning here is that to get the line of string you should use the getline(cin, s)
	//you can remember as the getline(cin>>s) like type thing
	int vowel=0 , constant=0, space=0;
	for(auto &it : s){
	    it=tolower(it);
	    if(it=='a' || it=='e' || it=='i' || it=='o' || it=='u'){
	        vowel++;
	    }
	    else if(it==' '){
	        space++;
	    }
	    else{
	        constant++;
	    }
	}
	cout<<vowel <<" " <<constant<<" "<<space<<" ";
	
	
}
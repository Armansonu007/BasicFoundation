//remove dublicates from the string 
//then we will solve the question of array strings
#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    getline(cin, input);
    stringstream ss(input);
    string temp;
    vector<string>str;
    while(getline(ss, temp, ' ')){
        //push_back kar skate hai if  vector of string ho to
        str.push_back(temp);
    }
    unordered_set<string>st;
    //there is also another way to this 
    //that is to use it maintain order as they are but remove the dublciates
    for(int i=0;i<str.size();i++){
        string crawl=str[i];
        if(st.count(crawl)==0){
            //mtlb present nahi hai 
            //first time dekhel hai
            cout<<crawl<<" ";
            st.insert(crawl);
        }
    }
}
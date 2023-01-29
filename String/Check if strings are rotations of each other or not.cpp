#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
// Rotate String Leetcode
bool rotateString(string s, string goal) {

      if(s.size()!=goal.size()){
        return false;
      }  

      string s1=s+s;
      cout<<s1<<endl;
       if(s1.find(goal)!=string::npos) {
          return true;
       }

      return false;

      // return 1;
}


// gfg
bool areRotations(string s1,string s2){
      if(s1.size()!=s2.size()){
        return false;
      }  

      string str=s1+s1;
      // cout<<s1<<endl;
       if(str.find(s2)!=string::npos) {
          return true;
       }

      return false;
}
int main() {

  string s;cin>>s;
  string r;cin>>r;

  // cout<<rotateString(s,r);

  cout<<areRotations(s,r);

 
 
  // Which Object method returns an iterable that can be used to iterate over the properties of an object?
  // What will this code print? 
  
}


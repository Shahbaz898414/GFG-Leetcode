#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


bool isAnagram(string s, string t) {
     sort(s.begin(),s.end());
     sort(t.begin(),t.end());
     if(s == t) return true;
     return false;
}

bool isAnagram(string a, string b){        

     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     if(a == b) return true;
     return false;
        
}



int main() {

  string s;cin>>s;
  string r;cin>>r;

  // cout<<rotateString(s,r);

  cout<<isAnagram(s,r);

 
 
  // Which Object method returns an iterable that can be used to iterate over the properties of an object?
  // What will this code print? 
  
}


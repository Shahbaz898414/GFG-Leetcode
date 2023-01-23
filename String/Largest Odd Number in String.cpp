#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

string largestOddNumber(string num) {
        int i;
        for( i = num.size()-1 ; i >= 0 ; --i){
            if((num[i]-48) % 2 != 0)
                break;
        }
        num.resize(i+1);
        
        return num; 
}

string maxOdd(string s) {
        
      int i;
      for( i = s.size()-1 ; i >= 0 ; --i){
          if((s[i]-48) % 2 != 0)
            break;
      }
      s.resize(i+1);
        
      return s;
}

int main() {

  // int n,B,k;cin>>n;
  // int a[n];

  string s;cin>>s;
  getline(cin,s);
  // cout<<s<<" "<<s.size()<<endl;
  cout<<largestOddNumber(s)<<endl;

  // vector<int> a(n),b(k);

  // int a[n];
  
  // for(int i=0; i<n; i++) {
  //   cin>>a[i];
  // }

  // cin>>k;

 
 
  
  
}
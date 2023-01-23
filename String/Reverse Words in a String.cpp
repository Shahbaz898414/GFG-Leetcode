#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

string reverseWords2(string s) {
      stringstream ss(s);
      string rev, w;
      // stack<string> st;
      ss >> rev;
      int cnt=0;
      // cout<<ss<<" ss"<<endl;
      while (ss >> w){
        cnt++;
         cout<<rev<<endl;
        rev = w + " " + rev;
       
      } 
        
      return rev.substr(0, rev.length());

      //  for (int i = 0; i < s.size(); i++) {
      //    /* code */
      //     if(s[i]==' '){
      //       cout<<s[i]<< "  b"<<endl;
      //     }
      //  }
      //  cout<<endl;

      // return s; 
       
}

string reverseWords3(string S)  { 
        vector<string> vec;
        string str = "";
        for(int i = 0; i<S.size(); i++) {
            if(S[i] == '.') {
                vec.push_back(str);
                vec.push_back(".");
                str = "";
            }
            else {
                str += S[i];
            }
        }
        vec.push_back(str);

        // for(auto it:vec){
        //   cout<<it;
        // }
        // cout<<endl;
        reverse(vec.begin(), vec.end());
        // for(auto it:vec){
        //   cout<<it;
        // }
        // cout<<endl;
        string ans = "";
        for(int i = 0; i < vec.size(); i++) {
            ans += vec[i];
        }
        return ans;
} 

int main() {

  // int n,B,k;cin>>n;
  // int a[n];

  string s;cin>>s;
  getline(cin,s);
  // cout<<s<<" "<<s.size()<<endl;
  cout<<reverseWords2(s)<<endl<<9;

  // vector<int> a(n),b(k);

  // int a[n];
  
  // for(int i=0; i<n; i++) {
  //   cin>>a[i];
  // }

  // cin>>k;

 
 
  
  
}
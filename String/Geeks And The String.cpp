#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
string removePair(string str) {
        // code here
        stack<char> st;
        
        st.push('@');
        st.push(str[0]);
        
        for(int i=1; i<str.size(); i++){
            if(st.top() == str[i])
                st.pop();
            else
                st.push(str[i]);
        }
        
        string ans="";
        while(st.top() != '@'){
            ans += st.top();
            st.pop();
        }
        if(ans.length() <= 0)
            return "-1";
            
        reverse(ans.begin(), ans.end());
        return ans;
}

int main() {

  // int n,B,k;cin>>n;
  // int a[n];

  string s;cin>>s;
  // cout<<s<<" "<<s.size()<<endl;
  cout<<removePair(s);

  // vector<int> a(n),b(k);

  // int a[n];
  
  // for(int i=0; i<n; i++) {
  //   cin>>a[i];
  // }

  // cin>>k;

 
 
  
  
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
// with stack

string removeOuterParentheses2(string s) {
    stack<char>st;
    string ans;
    for(auto a:s) {
        if(a=='(') {
            if(st.size()>0) {
                ans+='(';
            }
            st.push('(');
        }else {
            if(st.size()>1) {
                ans+=')';
            }
            st.pop();
        }
    }
    return ans;
}

// leetcode
string removeOuterParentheses(string s) {
      int last = s.size() - 1, balanced = 0;
      // cout<<last<<endl;
        for(int i = last; i >= 0; i--) {            
            if(s[i] == ')') balanced++;
            else {
              // cout<<s[i]<<" "<<i<<" "<<balanced<<" balanced"<<endl;
                balanced--;
                if(balanced == 0) {
                    s.erase(last,1);
                    // cout<<"s.erase("<<last <<" "<< i<<"); "<<s<<endl;
                    s.erase(i, 1);
                    // cout<<"s.erase("<<i <<" "<< 1<<"); "<<s<<endl;
                    last = i - 1;

                    // cout<<last<<" last"<<endl;
                }
            }
        }

        return s;  
}



int main() {

  // int n,B,k;cin>>n;
  // int a[n];

  string s;cin>>s;
  cout<<s<<" "<<s.size()<<endl;
  cout<<removeOuterParentheses2(s);

  // vector<int> a(n),b(k);

  // int a[n];
  
  // for(int i=0; i<n; i++) {
  //   cin>>a[i];
  // }

  // cin>>k;

 
 
  
  
}
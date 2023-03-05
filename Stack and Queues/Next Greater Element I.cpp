#include <bits/stdc++.h>
using namespace std;


vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    int n=nums2.size();
    stack<int> st;vector<int> cnt;
    unordered_map<int,int> mp;

    for (int i = n-1; i >=0; i--)
    {
      /* code */
      int le=nums2[i];
      while(!st.empty() and st.top()<=le){
        st.pop();
      }

      int ans=(st.empty())?-1:st.top();

      mp.insert({le,ans});
      st.push(le);

    }

    for(auto it:nums1){
      cnt.push_back(mp[it]);
    }


    return cnt;
    
}


int main() {
  int n,m;cin>>n>>m;
  vector<int> a(n),b(m);

  for (int i = 0; i <n; i++) {
    cin>>a[i];
  }

  for (int i = 0; i < m; i++) {
    cin>>b[i];
  }
  
  
  return 0;
}
// } Driver Code Ends
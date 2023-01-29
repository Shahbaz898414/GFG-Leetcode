#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 

// Leetcode

bool cmp(pair<char, int>& a,pair<char, int>& b)
{
    return a.second > b.second;
}

class Solution {
public:
    string frequencySort(string s) {
    map<char,int> f;

    for(auto val:s)
    {
          f[val]++;
    } 
      string ans;
      vector<pair<char, int> > A;
      for (auto& it : f) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);
    for(auto val:A)
    {
          for(int i=0;i<val.second;i++)
          ans+=val.first;
    }

      return ans;
    }
};

bool cmp(pair<char ,int> &a,pair<char,int> &b){
  if(a.second==b.second){
    return a.first<b.first;
  }

  return a.second>b.second;
}

string frequencySort(string s) {
  int n=s.size();
  map<char,int> mp;
  for (int i=0; i<n; i++) {
    mp[s[i]]++;
  }

  vector<pair<char,int>> v;

  for(auto &it:mp){
    v.push_back(it);
  }

  sort(v.begin(),v.end(),cmp);

  string d;

  for(auto it:v){
    for(int i=0;i<it.second;i++){
      // cout<<it.first<<" ";
      d.push_back(it.first);
    }
  }

  // cout<<endl;

  return d;

}

int main() {

  string s;cin>>s;

  cout<<s<<endl;

  cout<<frequencySort(s);
  

  
}


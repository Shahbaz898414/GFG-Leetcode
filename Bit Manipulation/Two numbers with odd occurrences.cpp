#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 


 vector<long long int> twoOddNum(long long int arr[], long long int n)  {

  map<long long int,long long int> mp;
  vector<long long int> ans;
  for (int i = 0; i <n; i++)
  {
    /* code */
    mp[arr[i]]++;
  }


  for(auto it:mp){
    if(it.second%2) ans.push_back(it.first);
  }


  return ans;

 } 


int main() {
  ll n,i;cin>>n;
  // string s;cin >>s;

  ll arr[n];

  for (ll i = 0; i < n; i++)
  {
    /* code */
    cin>>arr[i];
  }
  

 vector<long long int> d=twoOddNum(arr,n);


 for(auto it:d) cout<<it<<" ";

 cout<<endl;
  

}


#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main() {

  int n;cin>>n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  //   int k;
  // cin>>k;

  unordered_map<int,int> mp;
  int mx=0,sum=0;
  for (int i = 0; i <n; i++){
    sum+=arr[i];
    if(sum==0){
      mx=i+1;
    }else{
      if(mp.find(sum)!=mp.end()){
        mx=max(mx,i-mp[sum]);
      }else{
        mp[sum]=i;
      }
    }
  }


  return mx;
  

 
  
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int subsetXOR(vector<int> arr, int N, int k) {
vector<vector<int>> dp(N,vector<int>(128,0));
dp[0][0]=dp[0][arr[0]]=1;
for (int i =1; i <N; i++) {
  for (int j = 0; j < 128; j++) {
    dp[i][j^arr[i]]=dp[i-1][j^arr[i]]+dp[i-1][j];
  }
}

return dp[N-1][k];       
       
}

int main() {

  int n,B;cin>>n>>B;

  vector<int> A(n);
  
  for (int i = 0; i < n; i++) {
    cin>>A[i];
    // mp[A[i]]++;
  }

  map<int,int> freq;

  int cnt=0,xorr=0;

  for(auto it:A){
    xorr=xorr^it;
    if(xorr==B){
      cnt++;
    }

    if(freq.find(xorr^B)!=freq.end()){
      cnt+=freq[xorr^B];
    }

    freq[xorr]+=1;
  }

  cout<< cnt;
  
  //   int k;
  // cin>>k;

 
  
}
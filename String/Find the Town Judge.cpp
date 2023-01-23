#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int findJudge(int n, vector<vector<int>>& t) {  
      vector<int> v1(n+1,0); 
      vector<int> v2(n+1,0);

      for(int i=0;i<t.size();i++){
        v1[t[i][0]]++;
        v2[t[i][1]]++;
      }

      int ans = -1;

      for(int i=1;i<=n;i++) {
        if(v1[i] == 0 && v2[i] == n-1)
          ans = i;
      }

      return ans;
}

int main() {

  int n,B,k;cin>>n>>k;
  // string a[n];
    cout<<k<<endl;
  vector<vector<int>> a(k);

  for(int i=0 ;i < k; i++) {
    for (int j = 0; j < 2; j++) {
      cin>>a[i][j];
      cout<<a[i][j]<< " ";
    }
    cout<<endl;
  }

  cout<<findJudge(n,a);
  
}
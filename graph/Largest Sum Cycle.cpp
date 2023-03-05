#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 

long long largestSumCycle(int n, vector<int> edge) {
        // code here
        vector<int> count(n, 0);
        for(auto it: edge) {
            if(it == -1) continue;
            count[it]++;
        }
        queue<int> q;
        vector<int> vis(n, false);
        for(int i = 0; i < n; i++) {
            if(count[i] == 0) {
                vis[i] = true;
                q.push(i);
            }
        }
        
        while(!q.empty()) {
            int curr = q.front(); q.pop();
            int par = edge[curr];
            if(par == -1) continue;
            --count[par];
            if(count[par] == 0) {
                q.push(par);
                vis[par] = true;
            }
        }
        
        int res = -1;
        for(int i = 0; i < n; i++) {
            if(vis[i]) continue;
            int val = 0;
            for(int st = i; vis[st] == false; st = edge[st]) {
                val += st;
                vis[st] = true;
            }
            res = max(res, val);
        }
        return res;
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
  


}


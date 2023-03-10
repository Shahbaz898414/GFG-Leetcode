//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n=arr.size();

        map<int,queue<int>> mp;

        for(int i=0;i<n;i++){
          mp[arr[i]].push(i);
        }

        queue<int>  q;

        vector<int> ans(n,-1);

        ans[0]=0;
        q.push(0);

        while(!q.empty()){
          int i=q.front();
          q.pop();

          if(i==n-1) break;

          if(i-1>=0 and ans[i-1]==-1){
            ans[i-1]=ans[i]+1;
            q.push(i-1);
          }

          if(i+1<n and ans[i+1]==-1){
            ans[i+1]=ans[i]+1;
            q.push(i+1);
          }

          while(!mp[arr[i]].empty()){
            int j=mp[arr[i]].front();
            mp[arr[i]].pop();
            if(ans[j]==-1){
              ans[j]=ans[i]+1;
              q.push(j);
            }
          }
        }

        return ans[n-1];

    }
};
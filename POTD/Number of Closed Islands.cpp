//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



class Solution {
public:


    void dfs(int i,int j,int n,int m,vector<vector<int>> &grid) {
        grid[i][j]=1;

        int ax[4]= {1,-1,0,0};
        int ay[4]={0,0,1,-1};

        for(int k=0;k<4;k++) {
          int nx=i+ax[k];
          int ny=j+ay[k];

          
        }
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        for(int i=0;i<n;i++) {
          for(int j=0;j<m;j++) {
            if(i*j==0 || i==n-1 || j==m-1){
              if(grid[i][j]==0) {
                dfs(i,j,n,m,grid);
              }
            }
          }
        }

        // call DFS in whole greed

        int ans=0;

        for(int i=0;i<n;i++) {
          for(int j=0;j<m;j++) {
            // if(i*j==0 || i==n-1 || j==m-1){
              if(grid[i][j]==0) {
                ans++;
                dfs(i,j,n,m,grid);
              }
            // }
          }
        }

      return ans;
        
    }
};




int main(){
    
        
        int N; 
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.equalSum(N, A);
        
        cout<<res<<endl;
        
 
}


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    
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


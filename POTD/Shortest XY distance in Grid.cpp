//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
   public:
    int shortestXYDist(vector<vector<char>> grid, int N, int M) {
        // code here
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(N,vector<int>(M,0));
        
        for(int i=0;i<N; i++)
        {
            for(int j=0; j<M; j++)
            {
                if(grid[i][j]=='X')
                {
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        int ans=0;
        
        vector<int>row={1,0,-1,0};
        vector<int>col={0,1,0,-1};
        
        
        while(!q.empty())
        {
            auto curr=q.front();
            q.pop();
            int i=curr.first.first;
            int j=curr.first.second;
            int dis=curr.second;
            if(grid[i][j]=='Y')
            {
                ans=dis;
                break;
            }
            
            for(int k=0;k<4; k++)
            {
                int m=i+row[k];
                int n=j+col[k];
                
                if(m>=0 and n>=0 and m<N and n<M and !vis[m][n]) {

                    q.push({{m,n},dis+1});
                    vis[m][n]=1;
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        char ch;
        cin >> N >> M;

        vector<vector<char>> grid;

        for (int i = 0; i < N; i++) {
            vector<char> col;
            for (int i = 0; i < M; i++) {
                cin >> ch;
                col.push_back(ch);
            }
            grid.push_back(col);
        }

        Solution ob;
        cout << ob.shortestXYDist(grid, N, M) << endl;
    }
    return 0;
}
// } Driver Code Ends
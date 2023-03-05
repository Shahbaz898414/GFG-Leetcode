

#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000



struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


class Solution{
public:
    long long ans;

    long long dfs(vector<vector<int>>&v,int node,vector<int> &vis,int seats){
      vis[node]=true;

      long long cnt=1;

      for (int i = 0; i < v[node].size(); i++)
      {
        /* code */
        int cur=v[node][i];
        if(!vis[cur]) cnt+=(dfs(v,cur,vis,seats));
      }

      long long x=cnt/seats;

      if(cnt%seats) x++;

      if(node!=0) ans+=x;

      return cnt;
      
    }
     long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
      if(roads.size()==0){
        return 0;
      }  

      ans=0;
      int n=roads.size();
      vector<vector<int>> v(n+1);
      for (int i = 0; i <n; i++){
        int x=roads[i][0];
        int y=roads[i][1];

        v[x].push_back(y);
        v[y].push_back(x);
      }

      vector<int> vis(n+1,0);

      dfs(v,0,vis,seats);

      return ans;
      


    }
};



int main() {
 
   int t;
   string tc;
   getline(cin, tc);
   t=stoi(tc);
   while(t--) {
        int target;
        cin>>target;
        string newline;
        getline(cin,newline);
        string s; 
        getline(cin, s);
        
       
   }
   return 0;
}
// } Driver Code Ends


//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

// spark foundation


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& a){
      //Code Here
      vector<long long int>v;
      unordered_set<long long int>r;
      unordered_set<long long int>c;
      int sum  = 0, x =0, y =0;
      for(int i = 0; i < k; i++) {
          if(r.count(a[i][0])==0){
            x++; 
            r.insert(a[i][0]);
          }
          if(c.count(a[i][1])==0){
            y++; 
            c.insert(a[i][1]);
          }
          
          sum = (n*n - x*n -y*n + x*y);
          v.push_back(sum);
      }
      return v;
  }
};

//{ Driver Code Starts.
int main(){
    // int t;
    // cin>>t;
    // while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        // for(int i=0;i<k;i++){
        //   for (int j = 0; j <2 ; j++)
        //   {
        //     /* code */
        //      cout<<arr[i][j]<<" ";
        //   }
        //   cout<<endl;
        // }
        // cout<<endl; 
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    // }
    
    return 0;
}


// } Driver Code Ends

/*
which improved the overall performance of the project.

*/
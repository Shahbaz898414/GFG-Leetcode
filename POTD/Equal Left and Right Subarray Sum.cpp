//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int equalSum(int n, vector<int> &v) {
        
        for(int i=1;i<n;i++){
          v[i]+=v[i-1];
        }

        // for(int i=0;i<n;i++){
        //   cout<<v[i]<< " ";
        // }

        // cout<<endl;

        for(int i=0;i<n;i++) {
          if(v[i-1]+v[i]==v[n-1]) {

            // cout<<i<<endl;
            return i+1;
          } 
        }

        return -1;  
    }
    
};




int main(){
    // int t;
    // scanf("%d ",&t);
    // while(t--){
        
        int N; 
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.equalSum(N, A);
        
        cout<<res<<endl;
        
    // }
}


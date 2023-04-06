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
        
        
        // int l=0,r=N-1;
        
        if(N%2==0)  return -1;
        
        if(N==1)  return 1;
        
        int sum1=0,sum2=0;

        for(int i=0;i<n/2;i++){
          sum1+=v[i];
        }

        for(int i=n/2+1;i<n;i++){
          sum2+=v[i];
        }

        if(sum1==sum2) {
          return  (n+1)/2;
        }

        return -1;
        
        // while(l<r) {
        //    sum1+=A[l];
        //    sum2+=A[r];
        //    cout<<sum1<< " "<<sum2<<endl;
        //    if(sum1==sum2){
        //        return l+=2;
        //    }
        //    l++;
        //    r--;
        // }
        
        // return -1;
    
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


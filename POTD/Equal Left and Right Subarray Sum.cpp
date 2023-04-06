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
    int equalSum(int N, vector<int> &A) {
        
        
        int l=0,r=N-1;
        
        if(N%2==0)  return -1;
        
        if(N==1)  return 1;
        
        int sum1=0,sum2=0;
        
        while(l<r) {
           sum1+=A[l];
           sum2+=A[r];
           if(sum1==sum2){
               return l++;
           }
           l++;
           r--;
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


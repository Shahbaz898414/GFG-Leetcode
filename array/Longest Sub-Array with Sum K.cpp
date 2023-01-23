//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K)  { 

      int i=0,j=0,mx=INT_MIN;
      int sum=0;

      while(j<N){
        sum+=A[j];

        if(sum==K){
          mx=max(mx,j-i+1);
          j++;
        }else if(sum<K){
          j++;
        }else if(sum>K)  {
          while(sum>K){
            sum-=A[i];
            i++;
          }

          if(sum==K){
            mx=max(mx,j-i+1);
          }

          j++;
        }

      }

      return mx;
       
    } 

  

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
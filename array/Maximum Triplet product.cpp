#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n) {
    	long long firstmx=LONG_MIN;
      long long secondmx=LONG_MIN;
      long long thirdmx=LONG_MIN;

      long long firstmin=LONG_MAX;
      long long secondmin=LONG_MAX;

      for (int i = 0; i <n; i++) {
        if(arr[i]>=firstmx){
          thirdmx=secondmx;
          secondmx=firstmx;
          firstmx=arr[i];
        }else if(arr[i]>=secondmx){
          thirdmx=secondmx;
          secondmx=arr[i];
        }else if(arr[i]>=thirdmx){
          thirdmx=arr[i];
        }

        if(arr[i]<=firstmin){
          secondmin=firstmin;
          firstmin=arr[i];
        }else if(arr[i]<=secondmin) {
          secondmin=arr[i];
        }
      }


      return max(firstmin*secondmin*firstmx,firstmx*secondmx*thirdmx);
      
    }
};


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends
#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 

// int dp[10001];
int findMaxSum(int *arr, int n) {
	    
      if(n==1){
        return arr[0];
      }

      int ff=arr[0];
      int ss=0;
      int cnt=0;

      for (int i = 1; i <n; i++) {
        cnt=arr[i]+ss;

        ss=max(ff,ss);

        ff=cnt;

      }
      

      return max(cnt,ss);

     
}


int main() {

  int n,i;cin>>n;
 
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  

 
}


#include<bits/stdc++.h>
using namespace std;
#define ll long long

	int NthRoot(int n, int m){
	   int l=1,r=m;

     while(l<=r){

      int mid=(l+r)/2;
      if(pow(mid,n)==m) return mid;
      else if(pow(mid,n)<m) l=mid+1;
      else r=mid-1;
     }

     return -1;
	    
	}  


int main() {

  int n,B,k;cin>>n>>k;
  // int a[n];

  vector<int> a(n);
  
  for(int i=0; i<n; i++) {
    cin>>a[i];
  }

  
  
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool canPlaceCow(int n,int k,int mid, vector<int> &a){
  int ans=0,cnt=1;
  int ff=a[0];

  for (int i =1; i <n; i++)
  {
    /* code */
    if(a[i]-ff>=mid){
      cnt++;
      ff=a[i];
    }

    if(cnt==k) return 1;
  }

  return 0;
  

}

int solve(int n, int k, vector<int> &stalls) {
    sort(stalls.begin(),stalls.end());
   int l=1,r=stalls[n-1];
    int res;
   while(l<=r) {
    int mid=(l+r)/2;
    if(canPlaceCow(n,k,mid,stalls)) {
      res=mid;
      l=mid+1;
    }else{
      r=mid-1;
    }
   }

   return res;
}
 

int main() {

  int n,B,k;cin>>n>>k;
  // int a[n];

  vector<int> a(n),b(k);
  
  for(int i=0; i<n; i++) {
    cin>>a[i];
  }

  cout<<solve(n,k,a);

  // for (int i = 0; i <k; i++) {
  //   cin>>b[i];
  // }

 
  
  
  
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

  ll n;cin>>n;
  ll a[n];
  
  for(ll i=0; i < n; i++) {
    cin>>a[i];
  }

  ll ans=0;

  ll l=0,r=n-1;

  while(l<=r){
    ans=mx(ans,min(a[l],a[r])*(r-l));

    if(a[l]>=a[r]) r--;
    else l++;
  }

  cout<<ans<<endl;

 

  
  
}
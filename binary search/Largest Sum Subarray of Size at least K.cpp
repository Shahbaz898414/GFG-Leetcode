#include<bits/stdc++.h>
using namespace std;
#define ll long long int

long long int maxSumWithK(long long int a[], long long int n, long long int k)  {
      // using ll=long long int;
    ll cur_sum=0;
    for(int i=0;i<k;i++) {
        cur_sum+=a[i];
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<cur_sum<<endl;
    ll ans=cur_sum;
    ll left_sum=0;
    ll left_min=0;
    
    for(int i=k;i<n;i++){
        cur_sum+=a[i];
        left_sum+=a[i-k];
        left_min=min(left_min,left_sum);
        ans=max(ans,cur_sum-left_min);
    }
    return ans;  
}
 

int main() {

  ll n,B,k;cin>>n;
  // ll a[n];

  // vector<ll> a(n),b(k);

  ll a[n];
  
  for(ll i=0; i<n; i++) {
    cin>>a[i];
  }

  cin>>k;

 
 cout<<maxSumWithK(a,n,k);

 
  
  
  
}
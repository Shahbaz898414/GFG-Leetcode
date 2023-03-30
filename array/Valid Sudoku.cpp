#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

    ll n,m;cin>>n>>m;
    ll a[n];
    
    for(ll i=0; i < n; i++) {
      cin>>a[i];
    }

    sort(a,a+n);

    int closest=a[0]+a[1]+a[2];

    for(int i=0;i<n-2;i++){
      int l=i+1;
      int r=n-1;
      while(l<r){
        int cur=a[i]+a[l]+a[r];
        if(cur==m)  return cur;
        if(abs(m-cur)<abs(m-closest)){
          closest=cur;
        }


        if(m<cur){
          r--;
        }else {
          l++;
        }
      }
    }


    cout<< closest<<endl;

}
#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void merge(long long arr1[], long long arr2[], int n, int m) { 
          int i=n-1,j=0;
          while(i>=0&&j<m){

                if(arr1[i]>=arr2[j]){

                    swap(arr1[i],arr2[j]);

                    i--,j++;

                }

                else{
                    break;
                }
          }

            sort(arr1,arr1+n);

            sort(arr2,arr2+m);
            
} 


int main() {

  ll n,B,m;cin>>n>>m;

  // vector<vector<ll>> a(n);
  // vector<ll> a(n),b(m);
  ll arr[n],brr[m];
  
  for (ll i = 0; i < n; i++) {
    // cin>>a[i];
    cin>>arr[i];
  }
 
  for (ll i = 0; i < n; i++) {
    // cin>>b[i];
    cin>>brr[i];
  }
  

   merge(arr,brr,n,m);
  //  int i=0,j=0;
  //  vector<int> ans;

  // while(i<n and j<m){
  //   if(a[i]>b[j]) ans.push_back(b[j++]);
  //   else ans.push_back(a[i++]);
  // }

  // while(i<n){
  //   ans.push_back(a[i++]);
  // }

  // while(j<m){
  //   ans.push_back(b[j++]);
  // }
  

 

 

 
  
}
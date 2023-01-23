#include<bits/stdc++.h>
using namespace std;
#define ll long long

long long int inversionCount(long long arr[], long long N) {
        long long temp[N];
        return _mergeSort(arr,temp,0,N-1);
}
    
long long int _mergeSort(long long arr[], long long temp[],int l,int r){
        int mid;
        long long inv_count=0;
        if(r>l){
            mid=l+(r-l)/2;
            inv_count += _mergeSort(arr, temp, l, mid);
            inv_count += _mergeSort(arr, temp, mid+1, r);
            inv_count += merge(arr, temp,l, mid+1, r);
        }
        return inv_count;
    }
    
long long int merge(long long arr[], long long temp[],int l,int mid, int r){
        int i,j,k;
        long long inv_count = 0;
        i = l; 
        j = mid; 
        k = l;
        while(i<=mid-1 && j<=r){
            if(arr[i]<=arr[j]){
                temp[k++] = arr[i++];
            }
            else{
                temp[k++] = arr[j++];
                inv_count += mid - i;
            }
        }
        while(i<=mid-1){
            temp[k++] = arr[i++];
        }
        while(j<=r){
            temp[k++] = arr[j++];
        }
        for(int i=l;i<=r;i++){
            arr[i]=temp[i];
        }
        return inv_count;
}
    // 8////////////////////////////*/9*-+9+6
    
    // /*--

int main() {

  ll n,B;cin>>n;
  ll a[n];

  // vector<ll> a(n);
  
  for(ll i = 0; i < n; i++) {
    cin>>a[i];
  }

 cout<< inversionCount(a,n);

  
  
}
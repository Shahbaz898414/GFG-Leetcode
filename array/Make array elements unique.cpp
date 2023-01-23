#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int minIncrements(vector<int> arr, int n) {

    int ans=0;
    sort(arr.begin(),arr.end());

    for (int i = 1; i <n; i++) {
      if(arr[i]<=arr[i-1]){
        int d=arr[i-1]-arr[i];
        ans+=d+1;
        arr[i] = arr[i-1]+1;
      }
    }

    return ans;
  

}

int main() {

  int n,B;cin>>n;
  // int arr[n];

  vector<int> a(n);
  
  for(int i = 0; i < n; i++) {
    cin>>a[i];
  }

  cout<<minIncrements(a,n);
  
}
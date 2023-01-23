#include<bits/stdc++.h>
using namespace std;
#define ll long long


int kthElement(int arr1[], int arr2[], int n, int m, int k) {

  vector<int> v;

  int i=0,j=0;

  while(i<n and j<m){
    if(arr1[i]<=arr2[j]){
      v.push_back(arr1[i]);
      i++;
    }else if(arr2[j]<=arr1[i]){
      j++;
      v.push_back(arr2[j]);
    }
  }

  while(i<n){
    v.push_back(arr1[i]);
  }

  while(j<m){
    v.push_back(arr2[j]);
  }


  return v[k-1];

  

  if(n>m) {
    return kthElement(arr2,arr1,m,n,k);
  }

  int low=max(0,k-m),high=min(k,n);

  while(low<=high){
    int cnt1=(low+high)>>1;
    int cnt2=k-cnt1;
    int l1=cnt1==0?INT_MIN:arr1[cnt1-1];
    int l2=cnt2==0?INT_MIN:arr2[cnt2-1];
    int r1=cnt1==n?INT_MAX:arr1[cnt1];
    int r2=cnt2==m?INT_MAX:arr2[cnt1];

    if(l1<=r2 and l2<=r1){
      return max(l1,l2);
    }else if(l1>r2){
      high=cnt1-1;
    }else{
      low=cnt1+1;
    }
  }
     
}

int main() {

  int n,B,k,m;cin>>n>>m>>k;
  int a[n];

  int arr1[n],arr2[m];

  // vector<int> a(n);
  
  for(int i=0; i<n; i++) {
    cin>>arr1[i];
  }

   for(int i=0; i<m; i++) {
    cin>>arr2[i];
  }

  cout<<kthElement(arr1,arr2,n,m,k);


  
  
}
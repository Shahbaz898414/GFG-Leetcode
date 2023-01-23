#include <bits/stdc++.h>
using namespace std;

// 9 -2  4 -1  5 -5  0  -3  2
//  


void rearrange(int arr[], int n) {
	    
	    vector<int> v1,v2;
      // int b[n];
     
	    for(int i=0;i<n;i++) {
    	     if(arr[i]<0) {
             v1.push_back(arr[i]);
              
              
           }
    	     else {
             v2.push_back(arr[i]);
           }
	    }

      int i=0,j=0,k=0;
      while(i<v1.size() and j<v2.size()){
        arr[k++]=v2[j++];
        arr[k++]=v1[i++];
      }

      while(j<v2.size()){
        arr[k++]=v2[j++];
      }

      while(i<v1.size()){
        arr[k++]=v1[i++];
      }
	}

  //  93 
  // -5 -2 -2


// Driver code
int main() {
  int n;cin>>n;
  int a[n];

  vector<int> v;

  int cnt0=0,cnt1=0,cnt2=0;
  map<int,int> mp;
  for (int i = 0; i <n; i++) {
    cin>>a[i];
   
  }
  // stockBuySell(a,  n);
  rearrange(a, n);

  for (int i = 0; i <n; i++) {
    cout<<a[i]<<" ";
  }
  
  // int x = INT_MAX, y=0;

  //       for(int i=0;i<n;i++)
  //       {
  //           x = min(a[i], x);

  //           y = max(y, a[i]-x);

  //           // cout<<x<<" "<<y<<endl;
  //       }
  //     cout<< y;

  

  
 
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long


int findKRotation(int arr[], int n) {
	    // code here
	    int l=0,r=n-1,m,ans;
	    
	    while(l<r){
	        m=(l+r)/2;
	        
	        if(arr[m]>arr[r]) l=m+1;
	        else{
	            ans=m;
	            r=m;
	        }
	    }
	    
	    return r;
	}

int findMin(int arr[], int n){
       int start=0;
        int end=n-1;
        while(start<end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]>arr[end])
            {
                start=mid+1;
            }
            else
            {
                end=mid;
            }
        }

        cout<<end<<endl;
        return arr[end];

}

int main() {

  int n,B,k;cin>>n;
  int a[n];

  // vector<int> a(n);
  
  for(int i=0; i<n; i++) {
    cin>>a[i];
  }

  cout<< findMin( a,n)<<endl;

  cout<<findKRotation(a,n)<<endl;

  for(int i=0;i<n;i++) {
    cout<<a[i]<<" ";
  }

  
}
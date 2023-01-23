#include<bits/stdc++.h>
using namespace std;
#define ll long long

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    pair<int, int> ans; 
    int mini1=INT_MAX; 
    int mini2=INT_MAX; 
    int ans1=-1, ans2=-1; 
    int diff1, diff2; 
    for( int i=0; i<n; i++)
    {
        diff1=x-arr[i]; 
        diff2=arr[i]-x; 
        
        if(diff1>=0)
        {
            if(diff1<mini1)
            {
                ans1=arr[i];
                mini1=diff1; 
            }
        }
        if(diff2>=0)
        {
            if(diff2<mini2)
            {
                ans2=arr[i];
                mini2=diff2; 
            }
        }
    }
    
    ans={ans1, ans2}; 
    return ans; 

}


int main() {

  int n,B;cin>>n;
  // int a[n];

  vector<int> a(n);
  
  for(int i=0; i<n; i++) {
    cin>>a[i];
  }

  // cout<<countRevPairs(n,a);

 

  
  
}
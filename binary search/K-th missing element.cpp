#include<bits/stdc++.h>
using namespace std;
#define ll long long int


// leetcode

int findKthPositive(vector<int>& arr, int k) {
      int val=1;
        for (int i=0; i<arr.size(); i++){
            if (arr[i]!=val){
                k--;
                --i;
            }
            if (k==0)return val;
            val++;
        }
        while(k>1){
            val++;
            k--;
        }
        return val;  
}

// gfg

int KthMissingElement(int a[], int n, int k)
{
    // Complete the function
     int beg = 0, end = n-1;
    
    while(beg <= end){
        
        int mid = (beg + end) >> 1;
        
        int missing_till_mid = a[mid] - (mid + a[0]);
        
        if(missing_till_mid < k)
            beg = mid + 1;
            
        else //missing_till_mid >= k
            end = mid - 1;
    }
    
    if(beg == n)
        return - 1;
        
    else
        return (beg-1 + a[0] + k);
}
 

int main() {

  int n,B,k;cin>>n;
  // int a[n];

  // vector<int> a(n),b(k);

  int a[n];
  
  for(int i=0; i<n; i++) {
    cin>>a[i];
  }

  cin>>k;

 
   cout<<KthMissingElement(a,n,k);

 
  
  
  
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool Search2(int N, vector<int>& A, int Key) {
        // Code here
        int l = 0, h = N-1;
         int mid;
        
        while( l <= h) {    
            mid = l + (h - l)/2;
            if(A[mid] == Key)
              return 1;
            if((A[l]==A[mid]) && (A[mid]==A[h])){
                l++;
                h--;
            }
            
            else if( A[l] <= A[mid]){
                if(A[l] <= Key && Key <= A[mid])
                h = mid-1;
                
                else
                l = mid+1;
            }
            
            else{
                if(A[mid] <= Key && Key <= A[h])
                   l = mid+1;
                 
                else
                  h = mid-1;
            }
            
        }
        
        return 0;
    }

int search(int a[], int l, int h, int k){
       
        while(l<=h){
            long  mid=(l+h)/2;
            if(a[mid]==k) return mid;
            
            if (a[l] <= a[mid]) { 
              if ( k>=a[l] && k<=a[mid] )
                h = mid - 1; 
              else
                l = mid + 1; 
            } else { 
              if (k>=a[mid]   && k <= a[h])
                l = mid + 1;
              else
                h = mid - 1;
            }
        }

        return -1;
    }

int search1(vector < int > & nums, int target) {
  int l = 0, h = nums.size() - 1; //<---step 1

  while (l <= h) { //<--- step 2
    int mid = (l + h) >> 1; //<----step 3
    if (nums[mid] == target)
      return mid; // <---step 4

    if (nums[l] <= nums[mid]) { //<---step 5
      if (nums[l] <= target && nums[mid] >= target)
        h = mid - 1; //<---step 6 
      else
        l = mid + 1; //<---step 7
    } else { //<---step 7
      if (nums[mid] <= target && target <= nums[h])
        l = mid + 1;
      else
        h = mid - 1;
    }
  }
  return -1; //<---step 8
}


int main() {

  int n,B,k;cin>>n>>k;
  // int a[n];

  vector<int> a(n);
  
  for(int i=0; i<n; i++) {
    cin>>a[i];
  }

  // cout<< search(a,0,n-1,k);

  cout<< search1(a,k);

  // cout<<countRevPairs(n,a);

 

  
  
}
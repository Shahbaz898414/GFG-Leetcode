#include<bits/stdc++.h>
using namespace std;
#define ll long long

int median(vector<vector<int>> &arr, int n, int m) {  
        int max_val = INT_MIN;
        int min_val = INT_MAX;
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                max_val = max(max_val , arr[i][j]);
                min_val = min(min_val , arr[i][j]);
            }
        }
        
        if(min_val == max_val){
            return min_val;
        }
        
        while(min_val < max_val){
            int mid = (min_val + max_val)/2;
            int count = 0;
            
            for(int i = 0 ; i < n ; i++){
                int s = 0;
                int e = m-1;
                
                while(s <= e){
                    int mi = (s+e)/2;
                    
                    if(arr[i][mi] >= mid){
                        e = mi-1;
                    }
                    else{
                        if(mi == m-1 || arr[i][mi+1] >= mid){
                            count += mi+1;
                            break;
                        }
                        s = mi+1;
                    }
                }
            }
            
            if(count > (n*m)/2){
                max_val = mid;
            }
            else{
                min_val = mid+1;
            }
        }
        
        return min_val-1;
}


int main() {

  int n,B,k;cin>>n>>k;
  // int a[n];

  vector<int> a(n);
  
  for(int i=0; i<n; i++) {
    cin>>a[i];
  }

  
  
}
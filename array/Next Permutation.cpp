#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

    
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int k,l;

        for ( k =N-2; k >=0; k--)
        {
          /* code */
          if(arr[k]<arr[k+1]){
            break;
          }
        }

        if(k<0) reverse(arr.begin(),arr.end());
        else {
          for ( l = N-1; l >k; l--)
          {
            /* code */
            if(arr[l]>arr[k]){
              break;
            }
          }

          swap(arr[k],arr[l]);
          reverse(arr.begin()+k+1,arr.end());
          
        }

        return arr;
        
    }

  
};

//  vector<int> nextPermutation(int N, vector<int> arr){
//         // code here
//         if( N<=1){
//           return;
//         }

//         int i=N-2;

//         while(i>=0 and arr[i]<=arr[i+1]) i--;

//         if(i>=0){
//           int j=N-1;
//           while(arr[j]<=arr[i]) j--;
//           swap(arr,i,j);
//         }
// } 



int main() {
  int n;cin>>n;
  int a[n];

  vector<int> v(n);

  int cnt0=0,cnt1=0,cnt2=0;
  // map<int,int> mp;
  for (int i = 0; i <n; i++) {
    cin>>v[i];
  }

  nextPermutation(n,v);
  
  
 
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:

    bool ok(long long mid,vector<int>& A,int m,int k){
      int cnt=0;
      int sum=0;
      int len=A.size();

      for (int i = 0; i <len; i++) {
       
        if(A[i]<=mid){
          sum++;
        }else{
          if(sum>=k){
            cnt++;
          }

          sum=0;
        }

        if(sum>=k){
          cnt++;
          sum=0;
        }
      }

      if(sum>=k) cnt++;

      return  (cnt>=m);
      
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l=1;
        int r=*max_element(bloomDay.begin(),bloomDay.end());

        if((long long)m*k>(long long)bloomDay.size()){
          return -1;
        }

        while(l<r){
          long long mid=((long long) l+r)/2;

          if(ok(mid,bloomDay,m,k)) r=mid;
          else l=mid+1;
        }

        return l;
    }
};

int main() {

  int n,B,k;cin>>n;
  int a[n];

  // vector<int> a(n);
  
  for(int i=0; i<n; i++) {
    cin>>a[i];
  }


  for(int i=0;i<n;i++) {
    cout<<a[i]<<" ";
  }

  
}

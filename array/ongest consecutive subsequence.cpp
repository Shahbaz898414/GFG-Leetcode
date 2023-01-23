#include <bits/stdc++.h>
using namespace std;


int findLongestConseqSubseq(int a[], int n)
    {
      
      unordered_map<int,int>m;
      int i,mx=0,cnt=0;
      for(i=0;i<n;i++){
          m[a[i]]++;
      }
      for(i=0;i<n;i++){
        if(m[a[i]-1])continue;
          
        cnt=0;
        int x = a[i];
        while(m[x]>=1){
        //   cout<<x<<" ";
            cnt++;
            x++;
        }
        //   cout<<cnt<<endl;
        mx=max(mx,cnt);
      }
      return mx;
    }

 int longestConsecutive(vector<int>& nums) {
        set<int> s;
        int n=nums.size();
        for (int i = 0; i < n; i++)
        {
          /* code */
          s.insert(nums[i]);
        }

        int mx=0;
        for(auto it:nums){
          if(s.count(it-1)){
              int a=it;
              int b=1;

              while(s.count(a+1)){
                a++;
                b++;
              }
            mx=max(mx,b);

          }
        }

        return mx;
        
 }
    
    
 
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here

      set<int> s;
      for (int i = 0; i <N; i++)
      {
        /* code */
        s.insert(arr[i]);
      }

      int mx=0;

      for (int i = 0; i <N; i++)
      {
        /* code */
        if(!s.count(arr[i]-1)){
          int a=i;
          int b=1;
          while(s.count(arr[a]+1)){
            a++;
            b++;
          }

          mx=max(mx,b);
        }
      }

    return mx;

      
      
      
      // int b[N+1];

      // for(int i=1;i<=N;i++){
      //   b[i]=-1;
      // }

      // int k=1;
      
      // for(int i=0;i<N;i++) {
      //     b[arr[i]-1]=arr[i];
      // }

      // // for (int i = 0; i <N; i++)
      // // {
      // //   /* code */
      // //   cout<<b[i]<<" ";
      // // }

      // cout<<endl;
      
      
      // int j=1;
      
      // for( j=0;j<N;j++) {
      //   // cout<<j<<' ';
      //     if(b[j]==-1){
      //         break;
      //     }
      // }
      // // cout<<endl;
      // return j;
    }



int main() {
  int n;cin>>n;
  int a[n];

  vector<int> v(n);

  int cnt0=0,cnt1=0,cnt2=0;
  // map<int,int> mp;
  for (int i = 0; i <n; i++) {
    cin>>a[i];
  }

  cout<<findLongestConseqSubseq(a,n);
  
  
 
  return 0;
}

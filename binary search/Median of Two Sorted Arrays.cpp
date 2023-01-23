#include<bits/stdc++.h>
using namespace std;
#define ll long long

 double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        vector<int>ans;
        
        int i = 0, j=0;
        int n = array1.size();
        int m = array2.size();
        while(i<n && j<m )
        {
            if(array1[i] < array2[j])
            {
                ans.push_back(array1[i]);
                i++;
            }
            else
            {
                ans.push_back(array2[j]);
                j++;
            }
        }
        while(i<n)
        {
            ans.push_back(array1[i]);
            i++;
        }
        while(j<m)
        {
            ans.push_back(array2[j]);
            j++;
        }

        // cout<<ans.size()<<endl;

        // for(auto it:ans){
        //   cout<<it<<" ";
        // }
        // cout<<endl;
        
        if((n+m)%2 == 1)
            return ans[(n+m)/2];
        double d = ans[(n+m)/2] + ans[((n+m)/2)-1];
        return d/2;
        
    
    }

double MedianOfArrays2(vector<int>& a, vector<int>& b) {
        
        vector<int> v;
        int i=0,j=0;
        int n=a.size();
        int m=b.size();
        // cout<<1<<endl;
        while (i<n and j<m) {
          if(a[i]<=b[i]) {
            v.push_back(a[i]);
            i++;
          }else {
            v.push_back(b[i]);
            j++;
          }
        }

        // cout<<2<<endl;
        

        while(i<n) {
          v.push_back(a[i]);
          i++;
        }

        while(j<m) {
          v.push_back(b[i]);
          j++;
        }

        // cout<<v.size()<<endl;

        // for(auto it:v){
        //   cout<<it<<" ";
        // }
        // cout<<endl;

        if(v.size()%2==0){
          double d=v[n+m/2]+v[(n+m/2)-1];
          return d/2;
        }else{

          // cout<<v[(m+n/2)]<<endl;
          return v[(n+m/2)];
        }
                    
}

int main() {

  int n,B,k;cin>>n>>k;
  // int a[n];

  vector<int> a(n),b(k);
  
  for(int i=0; i<n; i++) {
    cin>>a[i];
  }

  for (int i = 0; i <k; i++) {
    cin>>b[i];
  }

  // cout<<0<<endl;

  cout<<MedianOfArrays2(a,b);

  // cout<<MedianOfArrays2(a,b);
  
  
  
}
#include <bits/stdc++.h>
using namespace std;



void sort012(int a[], int n)
    {
         map<int,int> mp;
      for (int i = 0; i <n; i++)
      {
        /* code */
        // cin>>a[i];
        mp[a[i]]++;
      }
      int x=-1;
    
      for(auto it:mp){
        for(int i=0;i<it.second;i++) {
        if(i==0 and x==-1) x++, cout<<it.first;
        else  cout<<" "<<it.first;

        //  cout<<it.first<<" ";
        }
       }
       
    }


// Driver code
int main() {
  int n;cin>>n;
  int a[n];

  vector<int> v;

  int cnt0=0,cnt1=0,cnt2=0;
  map<int,int> mp;
  for (int i = 0; i <n; i++) {
    cin>>a[i];
    mp[a[i]]++;
    if(a[i]==0){
      cnt0++;
    }else if(a[i]==1){
      cnt1++;
    }else {
      cnt2++;
    }
  }
  // sort012(a,n);

// return 0;
  while(cnt0>0){
    v.push_back(0);
    cnt0--;
  }

  while(cnt1>0){
    v.push_back(1);
    cnt1--;
  }

  while(cnt2>0){
    v.push_back(2);
    cnt2--;
  }
  for(int i=0;i<v.size();i++) {
    if(i==0){
      cout<<v[i];
    }else cout<<" "<<v[i];
  }

  
  return 0;
}

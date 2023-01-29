#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int freq[1000007];

 

void convert(int arr[], int n) {

     // code here

     vector<int> ans;

    for(int i=0;i<n;i++){

        ans.push_back(arr[i]);

    }

    

    sort(ans.begin(),ans.end());

    

    for(int i=0;i<n;i++){

        freq[ans[i]]=i;

    }

    

    for(int i=0;i<n;i++){

        arr[i] = freq[arr[i]];

    }
 }

int main() {

  // int n,B,k;cin>>n;
  // int a[n];

  string s;cin>>s;
  getline(cin,s);
  // cout<<s<<" "<<s.size()<<endl;
  // cout<<largestOddNumber(s)<<endl;

  // vector<int> a(n),b(k);

  // int a[n];
  
  // for(int i=0; i<n; i++) {
  //   cin>>a[i];
  // }

  // cin>>k;

 
 
  
  
}
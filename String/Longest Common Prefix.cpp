#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


string longestCommonPrefix2(vector<string>& s) {
      int ans = s[0].length(), n = s.size();
      for(int i=1; i<n; i++) {
          int j = 0;
          while(j<s[i].length() && s[i][j] == s[0][j])
            j++;
          ans = min(ans, j);
      }
      return s[0].substr(0, ans);
}


string longestCommonPrefix(string arr[], int N) {   
        sort(arr, arr+N);
        int i=0;
        int j=0; 
        string res="";
        while(i<arr[0].size() and j<arr[N-1].size())
        {
            if(arr[0][i]!=arr[N-1][i])break;
            res+=arr[0][i];
            i++;
            j++;
        }
        if(res.size()==0)return "-1";
        return res;

}



int main() {
  int n,B,k;cin>>n;
  string a[n];

  // vector<string> a(n);

  for (int i=0;i<n; i++) {
    cin>>a[i];
  }
  

  cout<<longestCommonPrefix(a,n)<<endl;
 
 
  
  
}
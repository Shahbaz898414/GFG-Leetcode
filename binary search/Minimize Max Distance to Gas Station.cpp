#include<bits/stdc++.h>
using namespace std;
#define ll long long int




// gfg

int ok(double x, vector <int>& v){
      int ret = 0;
      for (int i = 0; i < v.size() - 1; i++) {
         ret += ceil((v[i + 1] - v[i]) / x) - 1;
      }
      return ret;
}


double findSmallestMaxDist(vector<int>& s, int K) {
      double low = 0;
      int n = s.size();
      double high = s[n - 1] - s[0];
      while (high - low >= 1e-6) {
         double mid = (low + high) / 2.0;
         int x = ok(mid, s);
         if (x > K) {
            low = mid;
         }
         else {
            high = mid;
         }
      }
      return high;
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

 
 
  
  
}
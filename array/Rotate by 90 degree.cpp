#include <bits/stdc++.h>
using namespace std;
// const int N;


 void rotateby90(vector<vector<int> >& matrix, int n) {
    
   for (int i = 0; i < n / 2; i = i + 1)
    {
        for (int j = i; j < n - i - 1; j = j + 1)
        {
            int temp =matrix[i][j];
           matrix[i][j]=matrix[j][n-1-i];
           matrix[j][n-1-i] =matrix[n-1-i][n-1-j];
           matrix[n-1-i][n-1-j] =matrix[n-1-j][i];
           matrix[n-1-j][i] = temp;
        }
    }
}



int main() {

  int n,m;cin>>n;
  int a[n];

  vector<vector<int>> v(n);

  int cnt0=0,cnt1=0,cnt2=0;
 
  // map<int,int> mp;
  for (int i = 0; i <n; i++) {
    v[i].assign(n,0);
    for (int j = 0; j < n; j++) {
      cin>>v[i][j];
    }
    
  }

  rotateby90(v,n);
 
  

  
  
 
  return 0;
}

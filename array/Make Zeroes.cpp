#include <bits/stdc++.h>
using namespace std;

 void MakeZeros(vector<vector<int> >& matrix) {
        int rows = matrix.size() , cols = matrix[0].size();
        int mat[rows][cols] = {0};
        for(int i = 0 ; i < rows ; i++) {
            for(int j = 0 ; j < cols ; j++) {
                mat[i][j] = matrix[i][j];
            }
        }
        for(int i = 0 ; i < rows ; i++) {
            for(int j = 0 ; j < cols ; j++) {
                if(mat[i][j] == 0) {
                    int sum = 0;
                    if(i-1 >= 0)  {
                        sum += mat[i-1][j];
                        matrix[i-1][j] = 0;
                    }
                    if(j-1 >= 0)  {
                        sum += mat[i][j-1];
                        matrix[i][j-1] = 0;
                    }
                    if(i+1 < rows) {
                        sum += mat[i+1][j];
                        matrix[i+1][j] = 0; 
                    }
                    if(j+1 < cols) {
                        sum += mat[i][j+1];
                        matrix[i][j+1] = 0;
                    }
                    matrix[i][j] = sum;
                }
            }
        }
    }

void MakeZeros2( vector<vector<int>>&  matrix) {
  int rows = matrix.size(), cols = matrix[0].size();
  // cout<<rows<<" "<<cols<<endl;
  int mat[rows][cols]={0};
  for (int i = 0; i < rows; i++) {
  //  cout<<121<<endl;
    for (int j = 0; j < cols; j++) {
     mat[i][j]=matrix[i][j];
    }
    
  }

   for(int i = 0 ; i < rows ; i++) {
      for(int j = 0 ; j < cols ; j++) {
          if(mat[i][j] == 0) {
              int sum = 0;
              if(i-1 >= 0)  {
                sum += mat[i-1][j];
                matrix[i-1][j] = 0;
              }
              if(j-1 >= 0)  {
                sum += mat[i][j-1];
                matrix[i][j-1] = 0;
              }
              if(i+1 < rows) {
                sum += mat[i+1][j];
                matrix[i+1][j] = 0; 
              }
              if(j+1 < cols) {
                sum += mat[i][j+1];
                matrix[i][j+1] = 0;
              }
              matrix[i][j] = sum;
          }
      }
    }
  
        
}

int main() {

  int n,m;cin>>n>>m;
  int a[n];

  vector<vector<int>> v(n,vector<int>(m,0));

  int cnt0=0,cnt1=0,cnt2=0;
  cout<<11<<endl;
  // map<int,int> mp;
  for (int i = 0; i <n; i++) {
    for (int j = 0; j < m; j++) {
      cin>>v[i][j];
    }
    
  }
  cout<<111<<endl;

  MakeZeros(v);

  
  
 
  return 0;
}

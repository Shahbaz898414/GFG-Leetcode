#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void printPascal(int n)
{

  
  
  
     
for (int line = 1; line <= n; line++) {
    int C = 1; 
    for (int i = 1; i <= line; i++)
    {
         
        // v.push_back(C);
        cout<< C<<" ";
        C = C * (line - i) / i;
    }
    cout<<"\n";
}


}

int nthRowOfPascalTriangle(int n) {
        // code here
        vector<ll> v,v1;
    for (int line = 1; line <= n; line++) {
         int C = 1; 
      for (int i = 1; i <= line; i++) {
          v.push_back(C);
          // cout<< C<<" ";
          C = C * (line - i) / i;
      }
        cout<<"\n";
    }

    for(int i = v.size()-1; i >=0; i--) {
      if(n!=0){
        v1.push_back(v[i]);
      }else {
        break;
      }
    }

    // return v1;

    for(auto &it:v1) { 
      cout<<it<<" ";
    }
    
}

int main() {

  int n,m,k;cin>>n;
//   int a[n];

  // vector<vector<int>> v(n,vector<int>(m,0));

  // int cnt0=0,cnt1=0,cnt2=0;

  vector<ll> v1;
 
  // // map<int,int> mp;
  // for (int i = 0; i <n; i++) {
  //   // v[i].assign(n,0);
  //   for (int j = 0; j < m; j++) {
  //     cin>>v[i][j];
  //   }
    
  // }

//   findK(v,n,m,k);
        // cout<<0<<endl;
  // reverseSpiral(v,n,m,k);

  // rotateby90(v,n);

  // printPascal(n);

  // nthRowOfPascalTriangle(n);

  // for(auto it:v){
  //   cout<<it<<" ";
  // }

  ll arr[n][n];
 
    for (int line = 0; line < n; line++)
    {
       
        for (int i = 0; i <= line; i++)
        {
       
        if (line == i || i == 0)
            arr[line][i] = 1;
      
        else
            arr[line][i] = (arr[line - 1][i - 1] +
                            arr[line - 1][i])%1000000007;
        
        }
       
    }


    for (ll i = 0; i <n; i++){
      
      
      v1.push_back(arr[n-1][i]);
    }

    for(auto it:v1){
      cout<<it<<" ";
    }
    

    // for (int i = 0; i < n; i++)
    // {
    //   /* code */
    //   for (int j = 0; j <=i; j++)
    //   {
    //     /* code */
    //     cout<<arr[i][j]<<" ";
    //   }
    //   cout<<endl;
    // }
    
 
  //  vector<ll> v,v1;
  //   for (int line = 1; line <= n; line++) {
  //        int C = 1; 
  //     for (int i = 1; i <= line; i++) {
  //         v.push_back(C);
  //         // cout<< C<<" ";
  //         C = C * (line - i) / i;
  //     }
  //       // cout<<"\n";
  //   }

  //   for(int i = v.size()-1; i >=0; i--) {
  //     if(n!=0) {
  //       v1.push_back(v[i]);
  //       n--;
  //     }else {
  //       break;
  //     }
  //   }

  //   // return v1;

  //   for(auto &it:v1) { 
  //     cout<<it<<" ";
  //   }
  

  
  
 
  return 0;
}

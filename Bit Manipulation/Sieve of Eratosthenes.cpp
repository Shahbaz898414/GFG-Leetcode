#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 

vector<int> sieveOfEratosthenes(int n) {
      if(n==0 || n==1){
        return {0};
      }

      vector<bool>  v(n,0);

      vector<int> b;

      for (int i = 2; i <=n; i++)
      {
        
        if(v[i]==true) continue;
          b.push_back(i);
        // if(v[i]==false){
          // cout<<i<<" ";
          for (int j = i+i; j <=n; j+=i) {
            v[j]=true;
          }
        // }
      }
    // cout<<endl;
      return b;
      
    for(auto it:b){
      cout<<it<<" ";
    }

    cout<<endl;

}


int main() {

  int n,i;cin>>n;
 
  vector<int> b=sieveOfEratosthenes(n);

  for(auto it:b){
    cout<<it<<" ";
  }

  cout<<endl;

 
}


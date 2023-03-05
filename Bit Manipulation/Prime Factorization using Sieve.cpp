#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 

vector<int> findPrimeFactors(int n) {

    vector<int> pp;

    for (int i =2; i <=n; i++)
    {
      
      while (n%i==0)
      {
        
        pp.push_back(i);
        n=n/i;
      }
      
    }

    return pp;
    
}

int main() {

  int n,i;cin>>n;
 
  vector<int> b=findPrimeFactors(n);

  for(auto it:b){
    cout<<it<<" ";
  }

  cout<<endl;

 
}


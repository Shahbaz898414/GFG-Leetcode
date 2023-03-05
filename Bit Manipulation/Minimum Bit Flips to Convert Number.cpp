#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 


int minBitFlips(int a, int b) {

  int d=a^b;
  int cnt=0;

  while(d>0) {
    if((d&1)) cnt++;

    d>>=1;
  }


  return cnt;
  

}





int main() {
  // long long n,i;cin>>n>>i;
  // string s;cin >>s;

  int a,b;cin>>a>>b;

  cout<<minBitFlips(a,b);

  
}


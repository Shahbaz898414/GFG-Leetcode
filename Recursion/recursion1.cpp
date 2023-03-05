#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void printRecusion(ll n,ll m){
   
if(n<=0 || m<=0)  return;

printRecusion(n-1,m);



printRecusion(n,m-1);

cout<<n<<" ";
cout<<endl;

cout<<m<<" ";
 
}

int main() {

    // ll t;cin>>t;
    // while(t--){
      ll n,m;cin>>n>>m;
       printRecusion(n,m);
    // }
  
   
   
  
 
  
 


  return 0;
}
#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 


string oddEven(int N){
      if(N&1==1) return "odd";
      return "even";
}

int main() {
  int n,i;cin>>n;
  // string s;cin >>s;


  cout<<oddEven(n);

 
  // cout<<endl;
  
}


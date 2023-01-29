#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 


bool checkKthBit(int n, int k) {
      int mask=1<<k;
       if((n&mask)!=0){
        return 1;
       }  else{
        return 0;
       }
}

int main() {
  int n,i;cin>>n>>i;
  // string s;cin >>s;

 if( checkKthBit(n,i)) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 
  // cout<<endl;
  
}


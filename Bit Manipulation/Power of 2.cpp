#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 


bool isPowerofTwo(long long n){
        
        // Your code here 

        if(n==0) return 0;  
        
        if((n&n-1)==0){
          return 1;
        }else return 0;
        
}

int main() {
  long long n,i;cin>>n;
  // string s;cin >>s;
  int a,b,c;

  if(isPowerofTwo(n)){
    cout<<"YES"<<endl;
  }else cout<<"NO"<<endl;

  if((a+b)%2==0 and a+b>0){
    cout<<"YES"<<endl;
  }else if((a+c)%2==0 and a+c>0){
    cout<<"YES"<<endl;
  }else if((b+c)%2==0 and c+b>0){
    cout<<"YES"<<endl;
  }else cout<<"NO"<<endl;
 

 
  // cout<<endl;
  
}


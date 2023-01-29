#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 


void bitManipulation(int num, int i) {
        // your code here
        int mask=1<<i-1;
        cout<<mask<<endl;
        cout<<(num&mask)<<" (num&mask)"<<endl;
        // Get
        if((num&mask)!=0) {
            cout<<1<<" ";
        }else{
            cout<<0<<" ";
        }
        // set
        cout<<(num|mask)<<" ";
        // clear
        cout<<(num&(~(mask)))<<" ";
        
}

int main() {
  int n,i;cin>>n>>i;
  // string s;cin >>s;

  bitManipulation(n,i);

  cout<<endl;
  
}


#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 


int getOddOccurrence(int arr[], int n) {
        int x=0;
        
        for(int i=0;i<n;i++){
            x=x^arr[i];
        }
        
        
        return x;
    }





int main() {
  // long long n,i;cin>>n>>i;
  // string s;cin >>s;

  int b;cin>>b;

  int arr[b];

  for (int i = 0; i < b; i++)
  {
    /* code */
    cin>>arr[i];
  }
  


  cout<<getOddOccurrence(arr,b);

  
}


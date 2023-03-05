//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++



//{ Driver Code Starts.

int main(){
    // int t;
    // cin>>t;
    // while(t--){
     int low,high;cin>>low>>high;
      int d=high-low-1;
      // cout<<d<<endl;
        if(low%2==0 and high%2==0){
           
           cout<< (d-d/2);
        }else if(low%2 and high%2){
           
          cout<< (d/2)+2;
        }else if(low%2==0 and high%2){
            
            cout<< (d/2+1);
        }else {
           
            cout<<(d/2+1);
        }
        
       
    // }
    return 0;
}
// } Driver Code Ends
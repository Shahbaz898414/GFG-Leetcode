#include<bits/stdc++.h>
using namespace std;
#define ll long long

int *findTwoElement(int *arr, int n) {
  // cout<<0<<endl;
  // int ans[2];int k=0,xorr=0;

  int *v=new int[2];

  for (int i = 0; i <n; i++)
  {
    int x=abs(arr[i])-1;
    if(arr[x]<0) v[0]=x+1;
    else arr[x]*=-1;
  }

  for (int i = 0; i < n; i++)
  {
    
    if(arr[i]>0){
      v[1]=i+1;
    }
  }

  return v;
  
  

  // int x=0,y=0;

  // for(int i=0; i<n; i++) {
  //     // b[arr[i]]++;
  //     xorr^=arr[i];
  // }

  // for (int i = 1; i <=n; i++){
  //   xorr=xorr^i;
  // }

  
  // int  set_bit_no = xorr & ~(xorr - 1);

  // // cout<<set_bit_no<<endl;

  // for (int i = 0; i < n; i++)
  // {
  //   /* code */
  //   if(arr[i]&set_bit_no){

  //     // cout<<(arr[i]&set_bit_no)<<" ";
  //     x^=arr[i];
  //   }else{
  //     y=y^arr[i];
  //     // cout<<(arr[i]&set_bit_no)<<" ";
  //   } 
  // }

  // // cout<<endl;

  // for (int i =1; i <=n; i++)
  // {
  //   /* code */
  //   if(i&set_bit_no) x=x^i;
  //   else y=y^i;
  // }

  // int cnt=0;

  // for (int i = 0; i < n; i++)
  // {
  //   /* code */
  //   if(arr[i]==x) cnt++;
  // }

  // if(cnt==0){

  //   ans[0]=y;
  //   ans[1]=x;
  //   return ans;
  // } 

  // ans[0]=x;
  // ans[1]=y;


  // return ans;
  

//  cout<<1<<endl;

  // for (int i=1; i <=b.size(); i++) {
  //   cout<<b[i]<<" ";
  //   if(b[i]==0||b[i]>1){
  //     ans[k++]=b[i];
  //   }
  // }
  // cout<<endl;

//  return ans;
        
}

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
//

int main() {

  int n,B;cin>>n;
  // vector<vector<int>> a(n);
  // vector<int> a(n),b(m);
  int arr[n];
  
  for(int i = 0; i < n; i++) {
    cin>>arr[i];
  }
    // cout<<00<<endl;
   auto ans= findTwoElement(arr,n);

 cout<<ans[0]<<" "<<ans[1]<<endl;
  
  
}
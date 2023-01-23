#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool ispos(int a[],int n,int m,int mid) {
        int student=1;
        int sum=0;
        for(int i=0;i<n;i++) {
            if(sum+a[i]<=mid) {
                sum+=a[i];
            }
            else {
                student++;
                if(student>m || a[i]>mid){
                    return false;
                }
                sum = a[i];
            }
        }
        return true;
}

    int findPages2(int a[], int n, int m) 
    {
        //code here
        if(m>n)return -1;
        int s =0;
        int sum =0;
        for(int i=0;i<n;i++)sum+=a[i];
        int e = sum;
        int mid = (e-s)/2+s;
        int ans = -1;
        while(s<=e)
        {
            if(ispos(a,n,m,mid))
            {
                ans = mid;
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }


bool Allocation(int a[],int n,int m,int mid){
  int al=1,pages=0;
  for(int i = 0; i <n; i++){
    if(a[i]>mid){
      return 0;
    }
    if(pages+a[i]>mid){
      al++;
      pages=a[i];
    }else {
      pages+=a[i];
    }
  }

  if(al>m) return 0;

  return 1;
  
}

int findPages(int a[], int n, int m) {

      if(m>n) return -1;
      int l=0;
      int r=0;
      int res=-1;

      for (int i = 0; i <n; i++) {
    
        r+=a[i];
        if(a[i]<l) l=a[i];
      }

      cout<<l<<" "<<r<<endl;
      

      while(l<=r){
        int mid=(l+r)/2;
        if(Allocation(a,n,m,mid)){
          res=mid;
          r=mid-1;
        }else{
          l=mid+1;
        }

      }

    return res;

}
 

int main() {


  int n,B,k;cin>>n>>k;
  // int a[n];

  // vector<int> a(n),b(k);

  int a[n];
  
  for(int i=0; i<n; i++) {
    cin>>a[i];
  }

 
 cout<<findPages(a,n,k);

 
  
  
  
}
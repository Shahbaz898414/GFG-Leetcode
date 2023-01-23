

#include <bits/stdc++.h>
using namespace std;


void printSpiralOrder(vector<vector<int>> const &matrix)
{
   
    if (matrix.size() == 0) {
        return;
    }

    vector<int> v;
    int o=0;
 
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;
 
    while (1)
    {
        if (left > right) {
            break;
        }
        // print top row
        for (int i = left; i <= right; i++) {
            // cout << matrix[top][i] << " ";
            v.push_back(matrix[top][i]);
        }
        top++;
 
        if (top > bottom) {
            break;
        }
        // print right column
        for (int i = top; i <= bottom; i++) {
            // cout << matrix[i][right] << " ";
            v.push_back(matrix[i][right]);
        }
        right--;
 
        if (left > right) {
            break;
        }
        // print bottom row
        for (int i = right; i >= left; i--) {
            // cout << matrix[bottom][i] << " ";
            v.push_back(matrix[bottom][i]);

        }
        bottom--;
 
        if (top > bottom) {
            break;
        }
        // print left column
        for (int i = bottom; i >= top; i--) {
            // cout << matrix[i][left] << " ";
            v.push_back(matrix[i][left]);

        }
        left++;
    }
}

int findK(vector<vector<int>> &a, int n, int m, int k)
{
        vector<int> v;
    int o=0;
 
    int top = 0, bottom =n;
    int left = 0, right =m;
     while (1)
    {
        if (left > right) {
            break;
        }
        // print top row
        for (int i = left; i <= right; i++) {
            // cout << matrix[top][i] << " ";
            //
            v.push_back(a[top][i]);
            // if(o<k){
            //   o++;
            // }else{
            // //   break;
             
            // //   return a[top][i];
            // }
        }
        top++;
 
        if (top > bottom) {
            break;
        }
        // print right column
        for (int i = top; i <= bottom; i++) {
            // cout << a[i][right] << " ";
            //
             v.push_back(a[i][right]);
            // if(o<k){
            //   o++;
            // }else{  
            // //   return a[i][right];
              
            // }
        }
        right--;
 
        if (left > right) {
            break;
        }
        // print bottom row
        for (int i = right; i >= left; i--) {
            // cout << a[bottom][i] << " ";
            // 
            v.push_back(a[bottom][i]);
            //  if(o<k){
            //   o++;
            // }else{
            //     // return a[bottom][i];
                
            // //   break;
            // }

        }
        bottom--;
 
        if (top > bottom) {
            break;
        }
        // print left column
        for (int i = bottom; i >= top; i--) {
            // cout << a[i][left] << " ";
            // 
            v.push_back(a[i][left]);
            // if(o<k){
            //   o++;
            // }else{
            //     // return a[i][left] ;
                
            // //   break;
            // }

        }
        left++;
    }

    for(auto it:v){
        cout<<it<<" ";
    }
}



int reverseSpiral( vector<vector<int>>&a,int n, int m,int k)  {
        // code here
        vector<int >ans;
        int top=0;int bottom=n-1,left=0,right=m-1;

        // cout<<1<<endl;
        while(top<=bottom and left<=right){
            // cout<<2<<endl;
            for (int i = left; i <=right; i++)
            {
                /* code */
                ans.push_back(a[top][i]);
            }
            top++;
            for (int i =top; i <=bottom; i++)
            {
                /* code */
                ans.push_back(a[i][right]);
            }
            right--;

            if(top<=bottom){
                for (int i =right; i >=left; i--)
                {
                    /* code */
                    ans.push_back(a[bottom][i]);
                }
                bottom--;
            }

            if(left<=right){
                for (int i = bottom; i>=top; i--)
                {
                    /* code */
                    ans.push_back(a[i][left]);
                }
                left++;
                
            }
            
            
        }
            int f;
        // reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            if(i==k-1){
                f=ans[i];
                // cout<<ans[i]<<endl;
                break;
            }
        }

        return f;
}




int main() {

  int n,m,k;cin>>n>>m>>k;
//   int a[n];

  vector<vector<int>> v(n,vector<int>(m,0));

  int cnt0=0,cnt1=0,cnt2=0;
 
  // map<int,int> mp;
  for (int i = 0; i <n; i++) {
    // v[i].assign(n,0);
    for (int j = 0; j < m; j++) {
      cin>>v[i][j];
    }
    
  }

//   findK(v,n,m,k);
        // cout<<0<<endl;
  reverseSpiral(v,n,m,k);

  // rotateby90(v,n);
 
  

  
  
 
  return 0;
}

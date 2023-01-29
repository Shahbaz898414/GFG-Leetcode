#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int minOperation(string s) {
       int n = s.length();

        int cnt = 0;

        bool flag = true;

        for(int i=n-1;i>=0;i--){

            if(s.substr(0,i+1)==s.substr(i+1,i+1)){
                cout<<s.substr(0,i+1)<<" "<<s.substr(i+1,i+1)<<endl;
                cnt++;
                cnt+=i+1;
                cnt+=(n-(2*i+2));
                flag = false;
                break;
            }
        }

        if(flag) return n;
        return cnt;

}

int main() {


  string s,r;cin>>s;
  // getline(cin,s);

  cout<<minOperation(s);
  // cout<<endl;
  
}


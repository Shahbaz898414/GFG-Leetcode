#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int



int gcd(int x ,int y) {
    if(y==0)
        return x;
    return gcd(y , x%y);
}

string gcdOfStrings(string str1, string str2) {
    string ans="";
    if((str1+str2)!=(str2+str1)){
      return ans;
    }

    // cout<<2<<endl;

    

    int gd=gcd(str1.size(),str2.size());

    return str1.substr(0,gd);
}

 string gcdOfStrings2(string str1, string str2) {
            string ans="";
            if((str1+str2)!=(str2+str1)) {
                return ans;
            }

            int gd=gcd(str1.size(),str2.size());
            return str1.substr(0,gd);
        }

int main() {
  // long long n,i;cin>>n>>i;
  string s1,s2;cin>>s1>>s2;

  cout<<gcdOfStrings2(s1,s2);

}


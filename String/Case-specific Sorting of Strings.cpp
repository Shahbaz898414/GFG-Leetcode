#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 


string caseSort(string str, int n) {  

  // sort(str.begin(),str.end());

  vector<char> uc,lc;

  string ans;

  for(auto it:str){
    if(it>='A' and it<='Z'){
      uc.push_back(it);
    }else{
      lc.push_back(it);
    }
  }
  sort(uc.begin(),uc.end());
  sort(lc.begin(),lc.end());
        
   int i=0,j=0;
    for(auto it:str){
      if(it>='A' and it<='Z'){
        ans.push_back(uc[j]);
        j++;
      }else{
        ans.push_back(lc[i]);
        i++;
      }
    }

    return ans;
}

int main() {
  int n;cin>>n;
  string s;cin >>s;

  cout<<caseSort(s,n);
  
}


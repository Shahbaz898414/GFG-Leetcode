#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 


vector<string> AllPossibleStrings(string s){
		  vector<string>arr;
		    int n=s.length();
		    for(int number=0;number<(1<<n);number++){
		        string str="";
		        for(int j=0;j<n;j++){
		            if(number&(1<<j))
		            str+=s[j];
		        }
		        if(str.length())arr.push_back(str);
		    }
		    sort(arr.begin(),arr.end());
		    return arr;
      
}







int main() {
  // long long n,i;cin>>n>>i;
  string s;cin >>s;

  vector<string > sd=AllPossibleStrings(s);

  for(auto it:sd){
    cout<<it<<" ";
  }
  

}


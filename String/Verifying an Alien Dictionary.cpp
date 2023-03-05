#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int


bool isAlienSorted(vector<string>& words, string order) {
      int j=0;
      map<char,int> mp;
      for( auto &it : order ) mp[it] = j++;

      for( int i=1 ; i<words.size() ; i++ ) {

            bool flag = false ;
            string first = words[i-1];
            string second = words[i];

            int minLen = min(first.size(), second.size());

            for( int j=0 ; j<minLen ; j++ ) {
                
                if( mp[first[j]] < mp[second[j]] ) {
                    flag = true ;
                    break;
                }
               
                if( mp[first[j]] > mp[second[j]] ) return false;
            }

            
            if( !flag && first.size() > second.size() ) return false;
        }

        return true;
}

int main() {
  long long n,i;cin>>n;
  string s1,s2;cin>>s1>>s2;

  // cout<<gcdOfStrings2(s1,s2);

}


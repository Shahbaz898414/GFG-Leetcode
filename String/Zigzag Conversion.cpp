#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 

string convert(string s, int numRows) {
        if(numRows == 1) {
          return s;
        }
        string answer="";
        int n = s.size();
        int charsInSection = 2 * (numRows - 1); 
        for(int i = 0; i < numRows; ++i) {
            int index = i;
            while (index < n) {
                answer += s[index];
                if (i != 0 && i != numRows - 1) {
                    int charsInBetween = charsInSection - 2 * i;
                    int secondIndex = index + charsInBetween;
                    
                    if (secondIndex < n) {
                        answer += s[secondIndex];
                    }
                }
                index += charsInSection;
            }
        }
        return answer;
}

int main() {

  string s;cin >>s;

  ll n,i;cin>>n;
  
  // ll arr[n];

  // for (ll i = 0; i < n; i++)
  // {
  //   /* code */
  //   cin>>arr[i];
  // }
  


}


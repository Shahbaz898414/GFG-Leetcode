#include<bits/stdc++.h>
using namespace std;
#define ll long long


class Solution 
{
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        vector<set<char>> rows(9), cols(9), blck(9);                
        
        for (int i = 0; i < 9; i++) 
            for (int j = 0; j < 9; j++) 
                if (board[i][j] != '.')
                {
                    int d = board[i][j], b = (i/3)*3+j/3;
                    if (!rows[i].emplace(d).second) return false;   
                    if (!cols[j].emplace(d).second) return false;   // [2] test columns
                    if (!blck[b].emplace(d).second) return false;   // [3] test blocks
                }
        return true;
    }
};

int main() {

  ll t;cin>>t;
  while(t--) {
    ll n;cin>>n;
    string s1,s2;cin>>s1>>s2; 
    
  }

  
  
}
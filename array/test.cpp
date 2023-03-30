#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    
    bool isValidSudoku(vector<vector<char> > &board)
    {
		
        int row[9][9] = {0}, col[9][9] = {0}, grid_3x3[9][9] = {0}; 
        
        for(int i = 0; i < board.size(); i++)
            for(int j = 0; j < board[i].size(); j++)
                if(board[i][j] != '.') {
                    int num = board[i][j] - '1', k = i/3*3+j/3; 
                    if(row[i][num] || col[j][num] || grid_3x3[k][num])
                        return false;
                    row[i][num] = col[j][num] = grid_3x3[k][num] = 1;
                }
        
        return true;
    }
};


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
                    if (!cols[j].emplace(d).second) return false;  
                    if (!blck[b].emplace(d).second) return false;   
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
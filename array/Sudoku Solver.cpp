#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row,int col,char &c,vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            if(board[i][col]==c) 
                return false;
            if(board[row][i]==c) 
                return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)
                return false;
        }
        return true;
}

bool solve(vector<vector<char>>& board){
        for(int i=0;i<9;i++){ 
          // Traversal through each element in 9*9 Sudoku
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isSafe(i,j,c,board)==true){ 
                          //Checking whether 1-9 which numbers sets the 3 Sudoku Criteria
                            board[i][j]=c;
                            if(solve(board)==true) 
                            //Condition Checking
                                return true;
                            else
                                board[i][j]='.';
                        }
                    }
                    return false;

                }
            }
        }
        return true;
}

void solveSudoku(vector<vector<char>>& board) {
        solve(board);        
}



int main(){
   
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.minimumInteger(N, A);
        
        cout<<res<<endl;
        
 
}


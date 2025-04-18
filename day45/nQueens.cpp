#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;


bool issafe(vector<string>& board, int n,int row, int col){
    for(int j=0; j<n; j++){
        if(board[row][j]=='Q'){
        return false;
    }
    }
     for(int i=0; i<n; i++){
    if(board[i][col]=='Q'){
        return false;
    }
    }
    //for left diagonal...
    for(int i=row, j=col; i>=0 && j>=0; i--, j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    //for right digonak..
    for(int i=row, j=col; i>=0 && j<n; i--, j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    return true;
}
void nqueens(vector<string>& board,int row, int n, vector<vector<string>>& ans){
    if(row==n){
        ans.push_back(board);
        return;
    }
    for(int j=0; j<n; j++){
        if(issafe(board,n, row,j)){
            board[row][j]= 'Q';
            nqueens(board,row+1,n,ans);
            board[row][j]='.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board (n, string(n, '.'));
        vector<vector<string>> ans;

        nqueens(board, 0, n, ans);
        return ans;
    }
int main() {
    int n = 4;
    vector<vector<string>> solutions = solveNQueens(n);
    for (const auto& solution : solutions) {
        for (const auto& row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }
    return 0;
}
// Valid Sudoku
// You are given a a 9 x 9 Sudoku board board. A Sudoku board is valid if the following rules are followed:

// Each row must contain the digits 1-9 without duplicates.
// Each column must contain the digits 1-9 without duplicates.
// Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without duplicates.
// Return true if the Sudoku board is valid, otherwise return false

// Note: A board does not need to be full or be solvable to be valid.

============================================================================================================
  ===================================== Brut Force =======================================================
  ================= Check each condition as a for loop ===================================================

  class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //first check for duplicate row
        for(int row = 0; row<9; ++row) {
            unordered_set<char> rowmap;
            for(int i=0; i<9; ++i) {
                if(board[row][i] == '.') continue; //ignore
                if(rowmap.count(board[row][i])) {
                    return false;
                } else {
                    rowmap.insert(board[row][i]);
                }                
            }
        }

        for(int col = 0; col <9; ++col) {
            unordered_set<char> rowmap;
            for(int i=0; i<9; ++i) {
                if(board[i][col] == '.') continue; //ignore
                if(rowmap.count(board[i][col])) {
                    return false;
                } else {
                    rowmap.insert(board[i][col]);
                }                
            }
        }
        for (int square = 0; square < 9; square++) {
            unordered_set<char> seen;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    if (board[row][col] == '.') continue;
                    if (seen.count(board[row][col])) return false;
                    seen.insert(board[row][col]);
                }
            }
        }
        return true;       
    }
};

class Solution {
public:
    bool backtrack(vector<vector<char>>& board, int m, int n, string word) {
        if (m < 0 || n < 0 || m >= board.size() || n >= board[0].size()) {
            return false; 
        }
        
        if (board[m][n] != word.back()) {
            return false; 
        }
        
        word.pop_back();
        if (word.empty()) {
            return true; 
        }
        
        char c = board[m][n];
        board[m][n] = 0; 
        
        bool outcome = backtrack(board, m + 1, n, word)
                || backtrack(board, m - 1, n, word)
                || backtrack(board, m, n + 1, word)
                || backtrack(board, m, n - 1, word);
        
        board[m][n] = c; 
        return outcome;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        string reversedWord {word.begin(), word.end()};
        
        for (int m = 0; m < board.size(); ++m) {
            for (int n = 0; n < board[0].size(); ++n) {
                if (backtrack(board, m, n, reversedWord)) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
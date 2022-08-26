class Solution {
public:
      bool checkword(vector<vector<char>> &board, int i, int j, string word, vector<vector<int>> &vis, int k)
    {
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() ||
           vis[i][j])
        {
            return false;
        }
        if(word[k]!=board[i][j])
            return false;
        vis[i][j]=1;
        if(k==word.size()-1)
            return true;
        
        bool flag = (checkword(board, i+1, j, word, vis, k+1) || checkword(board, i-1, j, word, vis, k+1) ||checkword(board, i, j+1, word, vis, k+1) ||checkword(board, i, j-1, word, vis, k+1));
        vis[i][j]=0;
        return flag;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[0].size(); j++)
            {
                vector<vector<int>> vis(board.size(), vector<int>(board[0].
                                                                 size(), 0));
                if(board[i][j]==word[0])
                    if(checkword(board, i, j, word, vis, 0))
                        return true;
            }
        }
        return false;
    }
};
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int rows = matrix.size(), cols = matrix[0].size();
         vector < int > row(rows,-1), column(cols,-1);
        for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
          if (matrix[i][j] == 0) {
            row[i] = 0;
            column[j] = 0;
         }
      }

  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (row[i] == 0 || column[j]==0) {
        matrix[i][j] = 0;
      }
    }
  }
    }
};
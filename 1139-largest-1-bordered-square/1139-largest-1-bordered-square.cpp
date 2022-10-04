class Solution {
public:
    int largest1BorderedSquare(vector<vector<int>>& grid) {
           vector<vector<int>> U(grid), L(grid);  // up, left
        size_t largest = 0;
        for (size_t i = 0; i < grid.size(); i++)
            for (size_t j = 0; j < grid[0].size(); j++)
                if (grid[i][j]) {
                    L[i][j] += j > 0 ? L[i][j-1] : 0;
                    U[i][j] += i > 0 ? U[i-1][j] : 0;
                    for (size_t lim = min(L[i][j], U[i][j]), k = largest; k < lim; k++)
                        if (L[i-k][j] > k && U[i][j-k] > k)
                            largest = k+1;
                }
        return largest*largest;
      }
};
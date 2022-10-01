class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
	int m=matrix.size(),n=matrix[0].size();
	for(int i=1;i<m;i++){
		for(int j=1;j<n;j++){
			if(matrix[i][j]!=0) matrix[i][j]+=min({matrix[i-1][j],matrix[i][j-1],matrix[i-1][j-1]});
		}
	}
	int count=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) count+=matrix[i][j];
	}
	return count;
}
};
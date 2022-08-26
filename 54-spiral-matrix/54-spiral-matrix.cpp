class Solution { 

public: 

    vector<int> spiralOrder(vector<vector<int>>& matrix) { 

        vector<int> a; 

        int i,lc=0,lr=0; 

        int m=matrix.size(); 

        int n=matrix[0].size(); 

        if(m==1){for(int i=0;i<n;i++)a.push_back(matrix[0][i]); 

                 return a; 

                }    

        while(lc<n && lr< m ){ 

            for(i=lc;i<n;i++)//upper row 

                a.push_back(matrix[lr][i]); 

            lr++; 

            for(i=lr;i<m;i++){ 

                a.push_back(matrix[i][n-1]);//right column 

            } 

            n--; 

            if(lr < m){ 

                for(i=n-1;i>=lc;i--){ 

                    a.push_back(matrix[m-1][i]); 

                } 

                m--; 

            } 

            if(lc < n){ 

                 for(i=m-1;i>=lr;i--){ 

                     a.push_back(matrix[i][lc]); 

                 } 

                lc++; 

            } 

        } 

        return a; 

    } 

}; 
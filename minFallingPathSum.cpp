class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=1;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
 int b = INT_MAX, u = INT_MAX, nt = INT_MAX;
            if(j-1>=0)  b=matrix[i-1][j-1];
            u=matrix[i-1][j];
             if(j+1<m) nt=matrix[i-1][j+1];
matrix[i][j]+=min(b,min(u,nt));




            }
        }

        int ans=INT_MAX;
        for(int i=0;i<matrix[0].size();i++){
ans=min(ans,matrix[n-1][i]);
        }

        return ans;
    }
};

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>rows(matrix.size(),1);
        vector<int>cols(matrix[0].size(),1);
        for(int i = 0; i< matrix.size(); i++){
            for(int j = 0; j< matrix[0].size(); j++){
                if(matrix[i][j]==0){
                    rows[i]=0;
                    cols[j]=0;
                }
            }
        }
        for(int i = 0; i< matrix.size(); i++){
            for(int j = 0; j< matrix[0].size(); j++){
                if(rows[i]==0 || cols[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j>0){
                        matrix[0][j]=0;
                    }else{
                        col0 = 0;
                    }
                }
            }
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0){
            for(int j=0; j<m; j++) matrix[0][j]=0;
        }
        if(col0==0){
            for(int i=0;i<n; i++) matrix[i][0]=0;
        }
    }
};
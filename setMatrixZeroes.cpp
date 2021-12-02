class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int x=1;
        int y=1;
        
        for(int j=0; j<n; j++){
            if(matrix[0][j]==0) x=0;
        }
        
        for(int i=0; i<m; i++){
             if(matrix[i][0]==0) y=0;
        }
        
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        
        for(int j=0; j<n; j++)
        {
            if(matrix[0][j]==0)
            {
                for(int i=1; i<m; i++)
                    matrix[i][j]=0;
            }
        }
        
        for(int i=0; i<m; i++)
        {
            if(matrix[i][0]==0)
            {
                for(int j=0; j<n; j++)
                    matrix[i][j]=0;
            }
        }
        
        if(x==0)
        {
            for(int j=0; j<n; j++)
                matrix[0][j]=0;
        }
        
        if(y==0)
        {
             for(int i=0; i<m; i++)
                 matrix[i][0]=0;
        }
        
        
    }
};









class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        bool firstRowHasZero = false;
        
        for( int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                if(matrix[i][j]==0)
                {
                    if(i==0) firstRowHasZero = true;
                    else  matrix[i][0]=0;
                    
                    matrix[0][j]=0;
                    
                }
            }
        }
        
        for( int i = rows-1; i>=0; i--)
        {
            for(int j=cols-1; j>=0; j--)
            {
                if(i == 0 && firstRowHasZero)  matrix [i][j]=0;
                
                else if(i != 0 && (matrix[i][0]==0 || matrix [0][j] == 0))
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};
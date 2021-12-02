class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){  // 0 to i or i to n  - half matrix transpose and then reversr row
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0; i<n; i++){   
        reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // Copy original matrix into temp
        vector<vector<int>> temp = matrix;
        
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(matrix[i][j] == 0) {
                    // Zero out entire row
                    for(int k = 0; k < cols; k++) {
                        temp[i][k] = 0;
                    }
                    // Zero out entire column
                    for(int k = 0; k < rows; k++) {
                        temp[k][j] = 0;
                    }
                }
            }
        }
        
        matrix = temp; // Copy back
    }
};

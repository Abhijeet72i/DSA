class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int row = matrix.size();
    int col = matrix[0].size();
    int col0 = 1;

    // First pass to mark the rows and columns that should be zeroed
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                if (j != 0) {
                    matrix[0][j] = 0;
                } else {
                    col0 = 0;
                }
            }
        }
    }

    // Second pass to set the matrix elements to zero based on the markers
    for (int i = 1; i < row; i++) {
        for (int j = 1; j < col; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set the first row to zero if needed
    if (matrix[0][0] == 0) {
        for (int j = 0; j < col; j++) {
            matrix[0][j] = 0;
        }
    }

    // Set the first column to zero if needed
    if (col0 == 0) {
        for (int i = 0; i < row; i++) {
            matrix[i][0] = 0;
        }
    }
}
    
};
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         int row = matrix.size();
        int col = matrix[0].size();
        int startingRow = 0;
        int endingCol = col-1;
        int endingRow = row-1;
        int startingCol = 0;
        int count = 0;
       
        int total = row*col;
        vector<int>ans;
        while(count<total){
            for(int i =startingCol;i<=endingCol && count<total;i++ ){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
             for(int i =startingRow;i<=endingRow && count<total;i++ ){
                ans.push_back(matrix[endingCol][i]);
                count++;
            }
            endingCol--;
             for(int i =endingCol;i>=startingCol && count<total;i-- ){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
             for(int i =endingRow;i>=startingRow && count<total;i-- ){
                ans.push_back(matrix[startingCol][i]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};
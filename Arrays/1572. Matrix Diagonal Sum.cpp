class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        

        int sum = 0, rows = mat.size();


        for(int i = 0 ; i< rows; i++ )
        {
            sum += mat[i][i] + mat[i][rows-1-i];
        }
        if(rows%2 == 1)
        sum -= mat[rows/2][rows/2];

        return sum;
    }
};

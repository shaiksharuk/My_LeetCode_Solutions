class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> result;

        int rows = matrix.size(), columns = matrix[0].size();
        int left = 0 , right = columns-1, top = 0, bottom = rows-1;

        int total = rows*columns;

        while(total>0)
        {
            for(int i = left; i<= right ; i++)
            {
                result.push_back(matrix[top][i]);
                total--;
            }
            top++;
            if(total <=0) break;
            
            for(int i = top; i<bottom; i++)
            {
                result.push_back(matrix[i][right]);
                total--;
            }
            if(total <=0) break;
            for(int i = right ; i >= left ; i-- )
            {
                result.push_back(matrix[bottom][i]);
                total--;
            }
            bottom--;
            if(total <=0) break;
            for(int i = bottom ; i>=top ; i--)
            {
                result.push_back(matrix[i][left]);
                total--;
            }
            
            right--;
            left++;
        }

        return result;

    }
};


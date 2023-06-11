class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size(), n = matrix[0].size();
        int i=m-1, j=0;

        while(i>=0 && j<n)
        {
            int val = matrix[i][j];

            if(val == target)
                return true;

            (val > target) ? (i--) : (j++);
        }

        return false;
        
    }
};
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;
        int n= matrix.size();

        int left=0;
        int top=0;
        int right=matrix[0].size()-1;
        int bottom=n-1;

        while(left<=right && top<=bottom){

            for(int j=left;j<=right;j++){
                ans.push_back(matrix[top][j]);
            }
            top++;
            for(int j=top;j<=bottom;j++){
                ans.push_back(matrix[j][right]);
            }
            right--;
            if(top<=bottom){
            for(int j=right;j>=left;j--){
                ans.push_back(matrix[bottom][j]);
            }
            bottom--;
            }
            if(left<=right){
                for(int j=bottom;j>=top;j--){
                ans.push_back(matrix[j][left]);
            }
            left++;      
            }
        }
        return ans;
        
    }
};
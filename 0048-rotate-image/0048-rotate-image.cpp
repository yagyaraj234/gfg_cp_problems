class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int size=matrix.size();

      
       // Transpose the matrix
        for(int i=0;i<size;i++){
            for(int j=i;j<size;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        // swap colums
        for(int i=0;i<size;i++){  
            for(int j=0;j<size/2;j++){
                swap(matrix[i][j],matrix[i][size-j-1]);
            }
        }

        // for(int i=0;i<size;i++){
        // reverse(matrix[i].begin(),matrix[i].end());
        // }
        
    }
};
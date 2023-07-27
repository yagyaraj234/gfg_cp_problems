class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // Size of Vector
        int n= nums.size();

        vector<int> ans;

        vector<int> leftProduct(n);
        vector<int> rightProduct(n);

        leftProduct[0]=1;
        for(int i=1;i<n;i++){
            leftProduct[i]= leftProduct[i-1] * nums[i-1];
        }

        rightProduct[n-1]=1;
        for(int i=n-2;i>=0;i--){
            rightProduct[i]= rightProduct[i+1] * nums[i+1];
        }

        for(int i=0;i<n;i++){
            int num= leftProduct[i] * rightProduct[i];
            ans.push_back(num);
        }

        return ans;
        
    }
};
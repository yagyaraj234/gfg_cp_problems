class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=0;  
        int maxi=INT_MIN;  // declare minimum value


        // Run loop from 0 to arr size
        for(int i=0;i<nums.size();i++){
            max_sum+=nums[i]; // add all the value to sum

            if(maxi<max_sum){ // Here we check if the value of maxi is less the max_sum then we update the value to maxi= max_sum
                maxi=max_sum;
            }
            if(max_sum<0){ // check the max_sum value if it is negative then we update the max_sum =0;
                max_sum=0;
            }

            
        }

        return maxi;  // return max;
        
    }
};
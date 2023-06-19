class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int s=nums.size();
        int slow=0;
        int fast=0;

        while(fast<s){

            if(nums[fast]==0){
                ++fast;
            }
            else {
                swap(nums[slow],nums[fast]);
                ++slow;
                ++fast;
            }
            
            
        }
  }

    
};
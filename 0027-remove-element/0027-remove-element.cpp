class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int temp=0;
        int s=nums.size();

        for(int i=0;i<s;i++){
            if(nums[i]!=val){
                nums[temp]=nums[i];
                temp++;
            }

        }
        return temp;
        
    }
};
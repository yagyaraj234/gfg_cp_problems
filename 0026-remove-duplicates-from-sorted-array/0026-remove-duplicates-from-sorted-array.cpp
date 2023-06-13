class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp=1;
        int s=nums.size();
        int num=nums[0];
        for(int i=1;i<s;i++){
            if(nums[i]!=num){
                nums[temp]=nums[i];
                num=nums[temp];
                temp++;
            }
        }
        return temp;
    }
};
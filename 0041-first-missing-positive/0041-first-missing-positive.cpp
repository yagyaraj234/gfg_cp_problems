class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size(); // Check the size of nums

        for(int i=0;i<n;i++){
            int num=nums[i]; // 5

        if(num>=1 && num<=n){
            int pos=  num-1; // 4
            if(nums[pos]!=num){
                swap(nums[pos],nums[i]);
                i--;
            }
        }
        }

        for(int i=0;i<n;++i){

            if(nums[i]!=i+1){
                return i+1;
            }
        }
        
        return n+1;
        
    }
};
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=nums.size();

        // for(int i=0;i<s;i++){
        //     if( nums[i]>=target){
        //         return i;
        //     }
        // }
        // return s;

        int low=0;
        int high=s-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                high=mid-1;

            }
            else if(nums[mid]<target){
                low=mid+1;
            }
        }
    return low;
    }

};
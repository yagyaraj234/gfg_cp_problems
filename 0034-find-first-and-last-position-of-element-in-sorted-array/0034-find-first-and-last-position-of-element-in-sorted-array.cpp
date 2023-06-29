class Solution {
public:
    int firstOccurence(vector<int> &nums,int target){
        int low=0;
        int high=nums.size()-1;
        int fst=-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]==target){
                fst=mid;
                high=mid-1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
        }
        return fst;
    }
    int lastOccurence(vector<int> &nums,int target){
        int low=0;
        int high=nums.size()-1;
        int lst=-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]==target){
                lst=mid;
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
        }
        return lst;
    }
    vector<int> searchRange(vector<int>& nums, int target) {

        
        int first=firstOccurence(nums,target);
        int last=lastOccurence(nums,target);


        return {first,last};
        
    }
};
class Solution {
public:
    int longestConsecutive(vector<int> nums) {

        int n=nums.size();
        int longest=1,current=1;

        sort(nums.begin(),nums.end());
        if(n==0){ return 0;}

        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){

                if(nums[i]==nums[i-1]+1){
                    current++;
                }
                else{
                    current=1;
                }
            }
            longest = max(current,longest);

        }
        
        return longest;
        
    }
};
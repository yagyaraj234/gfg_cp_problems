class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int ans=0;
        unordered_map<int,int> ump;
        int currSum=0;

        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];

            if(currSum==k){
                ans++;
            }
            if(ump.find(currSum-k)!=ump.end()){
                ans += (ump[currSum - k]);
            }

            ump[currSum]++;
        }

        return ans;
        
    }
};
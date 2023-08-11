class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        int maxEl=nums.size()/3;
        

        for(auto it: nums){
            mp[it]++;
        }
        for(auto it: mp){
            if(it.second > maxEl){
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};
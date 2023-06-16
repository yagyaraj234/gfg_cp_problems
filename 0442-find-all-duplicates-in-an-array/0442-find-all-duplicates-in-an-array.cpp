class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> ans;
        map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for( const auto it: mp){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};
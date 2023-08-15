class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;

        unordered_map<int,int> ump;
        unordered_map<int,int> ump2;

        for( int i : nums1){
            ump[i]++;
        }

        for(int i: nums2 ){
            ump2[i]++;
        }
        set<int> mini;
        set<int> mini2;
        for(int i=0;i<nums1.size();i++){
            if(ump2.find(nums1[i])== ump2.end()){
                mini.insert(nums1[i]);
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(ump.find(nums2[i])== ump.end()){
                mini2.insert(nums2[i]);
            }
        }

        vector<int> s1(mini.begin(),mini.end());
        vector<int> s2(mini2.begin(),mini2.end());
        ans.push_back(s1);
        ans.push_back(s2);
     return ans;   
    }
};
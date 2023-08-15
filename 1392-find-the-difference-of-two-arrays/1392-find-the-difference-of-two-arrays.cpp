class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans; //Aggregate Answer
        vector<int> ans1; //Elements of nums1 absent in nums2
        vector<int> ans2; //Elements of nums1 absent in nums2
        unordered_set<int>st1; //Unique elements of nums1
        unordered_set<int> st2;//Unique elements of nums2

        for(int i = 0; i<nums1.size();i++){
            st1.insert(nums1[i]);
        }

        for(int i = 0; i<nums2.size();i++){
            st2.insert(nums2[i]);
        }

        for(auto i:st1){ //Checking nums1 elements in nums2
            if(st2.find(i)==st2.end()){
                ans1.push_back(i); //Adding missing elements in ans1 vector
            }
        }

        for(auto i:st2){ //Checking nums2 elements in nums1
            if(st1.find(i)==st1.end()){
                ans2.push_back(i); //Adding missing elements in ans2 vector
            }
        }
       ans.push_back(ans1);
       ans.push_back(ans2);
       return ans; 
    }
};
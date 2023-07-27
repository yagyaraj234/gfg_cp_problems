class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

     map<string,vector<string>> mp;

        vector<vector<string>> ans;

        for(int i=0;i<strs.size();i++){
            string st=strs[i];
            sort(st.begin(),st.end());
            mp[st].push_back(strs[i]);
        }
        for( auto i : mp){

            ans.push_back(i.second);
        }

        return ans;


    }
};
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        
        vector<pair<int,int>>mp(26,{-1,-1});
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            int val=s[i]-'a';
            if(mp[val].first==-1)mp[val].first=i;
            else mp[val].second=i;
        }

        for(int i=0;i<26;i++){
            if(mp[i].second!=-1){
                unordered_set<char> ust;
                for(int j=mp[i].first+1;j<mp[i].second;j++){
                    ust.insert(s[j]);
                }
                ans+=ust.size();
            }
        }
            return ans;
    }
};
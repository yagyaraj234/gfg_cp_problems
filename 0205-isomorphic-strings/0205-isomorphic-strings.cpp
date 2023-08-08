class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.size()!=t.size()) return false;

        vector<int> arr1(128,-1);
        vector<int> arr2(128,-1);

        int n=s.size();

        for(int i=0;i<n;i++){
            if(arr1[s[i]]!=arr2[t[i]]){
            return false;
            }
            arr1[s[i]]=arr2[t[i]]=i;
        }

        return true;
        
    }
};
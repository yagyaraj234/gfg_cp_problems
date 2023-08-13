class Solution {
public:
    static bool custom_comp(string a, string b){
        if(a+b>b+a){
            return true;
        }
        else return false;
    }
    string largestNumber(vector<int>& nums) {

        if(nums.size()==0){
            return "";
        }
        string ans;
        vector<string> newVect;

        for(int i=0;i<nums.size();i++){
            newVect.push_back(to_string(nums[i]));
        }

        for(auto it: newVect){
            cout<<it<<" ";
        }

        sort(newVect.begin(),newVect.end(),custom_comp);

        for(auto x: newVect){
            ans+=x;
        }

        int s=0;
        while(ans[s]=='0' && s<ans.size()-1) s++;

        return ans.substr(s);
        
    }
};
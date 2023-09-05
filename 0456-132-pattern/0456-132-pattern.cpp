class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        stack<int> st;
        int s= INT_MIN;
        int size= nums.size();


        for(int i=size-1;i>=0;i--){
            if(nums[i]<s){
                return true;
            }

            while(!st.empty() && nums[i]>st.top()){
                s=st.top();
                st.pop();
            }

            st.push(nums[i]);
        }

        return false;
    }
};
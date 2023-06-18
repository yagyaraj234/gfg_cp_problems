class Solution {
public:
    void rotate(vector<int>& nums, int k) {


        int s= nums.size();
        
        vector<int> temp(s);

        for(int i=0;i<s;i++){
            temp[(i+k)%s]=nums[i];
        }

        nums=temp;
        
    }
};
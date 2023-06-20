class Solution {
public:
    void sortColors(vector<int>& nums) {

        // Method: 1

        int low=0;
        int curr=0;
        int high=nums.size()-1;

        while(curr<=high){
            if(nums[curr]==0){
                swap(nums[low++],nums[curr++]);
            }
            else if(nums[curr]==2){
                swap(nums[curr],nums[high--]);
            }
            else{
                curr++;
            }
        }


        // Method 2 ---------------------------------------------

        // int one=0,two=0,zero=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         zero++;
        //     }
        //     if(nums[i]==1){
        //         one++;
        //     }
        //     if(nums[i]==2){
        //         two++;
        //     }
        // }

        // int i=0;
        // while(zero--){

        //     nums[i]=0;
        //     i++;
        // }
        // while(one--){

        //     nums[i]=1;
        //     i++;
        // }
        // while(two--){

        //     nums[i]=2;
        //     i++;
        // }
        
    }
};
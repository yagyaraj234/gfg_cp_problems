class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size(); // Check the size of nums


            // set the element in his  correct position
            // Example  [3,4,-1,1] =[1, ,3,4]
        for(int i=0;i<n;i++){
            int num=nums[i]; // 5

            // Here check the  the no. must be positive and less then the size of array
            if(num>=1 && num<=n){
            int pos=  num-1; // 4
            // check if the element is in it's correct position or not 
                if(nums[pos]!=num){
                swap(nums[pos],nums[i]);
                i--;  // substractiong because we have to check the element at correct position or not
                }
        }
        }

        // Iterate over the array if and check the missing no and return
        for(int i=0;i<n;++i){

            if(nums[i]!=i+1){
                return i+1;
            }
        }
        // If none of the no. is missing return size+1
        return n+1;
        
    }
};
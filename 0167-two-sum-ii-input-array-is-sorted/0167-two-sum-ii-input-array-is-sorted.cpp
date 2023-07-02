class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int s=numbers.size()-1;
        int first=0;
        int last=s;

        while(first!=last){
            if(first>0 && numbers[first]==numbers[first-1]){
                first++;
                continue;
            }

            if(last < s && numbers[last]==numbers[last+1]){
                last--;
                continue;
            }

            int sum= numbers[first]+numbers[last];
            if(sum>target){
                last--;
            }
            else if(sum<target){
                first++;
            }

            else if(sum==target){
                return {first+1,last+1};
            }
        }

        
        return {-1,-1};
    }
};
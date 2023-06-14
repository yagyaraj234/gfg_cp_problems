class Solution {
public:
    int mySqrt(int x) {

         int high=x,low=0;
        while(high>low){
            long int mid = low + ((long int)high - low + 1) / 2;
            if(mid<=sqrt(x))
                low = mid;
            else
                high = mid -1;
        }
        return low;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int i=0;
        int profit=0;
        while(i<prices.size()-1){
            if(prices[i+1]>prices[i]){
                profit=profit+prices[i+1]-prices[i];
                i++;
            }else{
                i++;
            }
        }
        return profit;

    }
};
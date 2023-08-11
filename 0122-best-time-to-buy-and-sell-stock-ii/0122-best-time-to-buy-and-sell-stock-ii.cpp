class Solution {
public:
    int maxProfit(vector<int>& prices) {

       int profit=0;
        int i=0;

        while(i<prices.size()-1){
            if(prices[i+1]>prices[i]){
                profit+=prices[i+1]-prices[i];
                i++;
            }
            else i++;
        }

    return profit;
    }
};
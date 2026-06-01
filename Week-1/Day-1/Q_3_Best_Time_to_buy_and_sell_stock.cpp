class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_prices=prices[0];
        int max_profit=0;

        for(int i=1;i<prices.size();i++){
            if(prices[i]<min_prices){
                min_prices=prices[i];
            }
            else{
                max_profit=max(max_profit,prices[i]-min_prices);
            }
        }
    return max_profit;;


    }
};

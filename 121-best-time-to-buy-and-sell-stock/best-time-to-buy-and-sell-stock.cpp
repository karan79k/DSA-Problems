class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowestPrice= INT_MAX;
        int overAllProfit = 0;
        int profIfSellTdy=0;

        for(int i=0; i<prices.size();i++){
            if(prices[i]<lowestPrice){
                lowestPrice=prices[i];
            }
            profIfSellTdy=prices[i]-lowestPrice;

            if(overAllProfit < profIfSellTdy){
                overAllProfit=profIfSellTdy;
            }


        }return overAllProfit;
    }
};
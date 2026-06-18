class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1;
        int maxp = 0;
        while(r<prices.size()){
            if(prices[r]>prices[l]){
                int profit = prices[r]-prices[l];
                maxp = max(profit,maxp);
            }
            else{
                l=r;
            }
            r++;
        }
        return maxp;
    }
};

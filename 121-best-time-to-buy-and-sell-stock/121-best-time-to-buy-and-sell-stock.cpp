class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0 ;
        int min=0 ;
        for(int i=1; i<prices.size();i++)
        {
            if(prices[i]-prices[min]>profit)
            {
                profit = prices[i]-prices[min];
            }
            else if(prices[i]-prices[min]<0)
            {
                min = i;
            }
        }
       return profit ;
    }
};
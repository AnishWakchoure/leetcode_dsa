class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min_price = prices[0];

        for (int i=0; i<prices.size(); i++){
            min_price = min(min_price, prices[i]);
            profit = max(profit, prices[i]-min_price);
        }

        return profit;
    }
};


/*
EXPLAINATION - 
1. Start with the first price
    min_price is set to the first element so we have a valid starting point.
   If you set it to 0, it would always stay 0, which is incorrect.

2. Track the lowest price so far
    As you loop through the array, min_price keeps updating to the 
    smallest value seen up to that day.
    Calculate possible profit each day
    For each price, compute prices[i] - min_price.

    This represents the profit if you bought at the lowest price so far and sold today.

3. Keep the maximum profit
    profit is updated whenever we find a better selling opportunity.
    At the end, profit holds the maximum achievable profit.

*/


/*
BRUTE FORCE - 
Use 2 for loops
i=0 to i=size
j=i to j=size
and everytime find max(profit, prices[j]-prices[i])
*/
// Problem: Best Time to Buy and Sell Stock (LeetCode #121)
// Difficulty: Easy
// Approach: Single Pass O(n)
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minIndex = 0;
        int maxProfit = 0;

        for(int i = 1; i < n; i++) {
            if(prices[i] < prices[minIndex]) {
                minIndex = i;
            } else {
                int profit = prices[i] - prices[minIndex];
                if(profit > maxProfit) {
                    maxProfit = profit;
                }
            }
        }

        return maxProfit;
    } 
};
*/

//Different approach using min and max functions
// Youtube solution:


/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int maxProfit = 0, bestBuy = prices [0];

         for(int i=1; i<prices.size(); i++) {
            if(prices[i] > bestBuy) {
              maxProfit = max(maxProfit, prices[i] - bestBuy);
         }
            bestBuy = min(bestBuy, prices[i]);
        }

     return maxProfit;

    }   
};

*/
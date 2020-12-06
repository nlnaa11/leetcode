
// 122. Best Time to Buy and Sell Stock II

// Say you have an array prices for which the ith element
// is the price of a given stock on day i.

// Design an algorithm to find the maximum profit.
// You may complete as many transactions as you like
// (i.e., buy one and sell one share of the stock multiple times).

// Note: You may not engage in multiple transactions at the same
// time (i.e., you must sell the stock before you buy again).


/**
 * Time complexity: O(n)
 * Space complexity: O(1)
**/ 
#include <vector>

int maxProfit(std::vector<int>& prices)
{
    int profit{0};  
    int len = prices.size();  // the length of the array = nums of day
       
    // no offers == no profit
    // one price offer is zero profit
    // two..
    if(len < 3)       
    {
        if(len == 2 && prices[len-1] > prices[len-2]) 
            return prices[len-1] - prices[len-2];
        else return 0;
     }
        
    // if len > 2
    // Assumption: a peak always follows a valley. Not before!
    // It follows that we only track valleys.
    // * if the peak conditions are met: 
    // ** sum the difference between the peak and the valley with profit;
    // ** reset the valley
    // * if the valley conditions are met: 
    // ** set the valley
      
    // The beginning is the valley, isn't it?
    int* valley{nullptr};
    if(prices[0] < prices[1]) valley = &prices[0];
      
    for(int i = 1; i < (len-1); ++i)
    {
        if(prices[i] > prices[i+1] &&
           prices[i] >= prices[i-1] && valley)
        {
            profit += prices[i] - *valley;
            valley = nullptr;
            continue;
        }
        if(prices[i] < prices[i+1] && prices[i] <= prices[i-1])
        {
            // if valley != 0 -> a deceptive peak
            if(!valley) valley = &prices[i];  
        }              
    }
        
    // The end is the peak, isn't it?
    if(prices[len-1] >= prices[len-2] && valley)
        profit += prices[len-1] - *valley;
        
    return profit;
}

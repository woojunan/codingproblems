class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        profit = 0
        index = 0
        
        while index < len(prices):
            current = prices[index]
            print("current: " + str(current))
            high = max(prices[index+1:])
            print("high: " + str(high))        
            high_index = prices.index(high)
            if(high > current):
                profit += high - current
                index = high_index + 1
                prices = prices[index:]         
            else:
                index += 1
            print("profit: " + str(profit))   
        
        return profit
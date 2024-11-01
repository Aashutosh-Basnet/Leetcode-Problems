class Solution(object):
    def maxProfit(self, prices):
        
        maxProfit = 0
        minPrice = float('inf')

        for price in prices:
            minPrice = min(minPrice, price)
            maxProfit = max(maxProfit,  price - minPrice)       

        return maxProfit     
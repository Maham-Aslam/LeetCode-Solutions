class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        size = len(prices)
        if size == 1: return 0
        
        minimum = 10000
        maxDiff = 0
        
        for i in range(len(prices)):
            minimum = min(prices[i], minimum)
            maxDiff = max(prices[i]-minimum, maxDiff)
        
        return maxDiff
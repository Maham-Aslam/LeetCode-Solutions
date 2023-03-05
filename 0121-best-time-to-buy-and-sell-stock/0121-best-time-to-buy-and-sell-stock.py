class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        size = len(prices)
        if size == 1: return 0
        
        minimum = 10000
        maxDiff = 0
        
        for i in prices:
            minimum = min(i, minimum)
            maxDiff = max(i-minimum, maxDiff)
        
        return maxDiff
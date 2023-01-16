class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
#         applying Kadane's Algorithm
        curr = 0
        max = -inf
        for i in nums:
            curr += i
            if(max < curr): max = curr
            if(curr < 0): curr = 0
        return max
            
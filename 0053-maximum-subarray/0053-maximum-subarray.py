class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
#         applying Kadane's Algorithm
        curr = 0
        max = -inf
        for i in range(len(nums)):
            curr += nums[i]
            if(max < curr): max = curr
            if(curr < 0): curr = 0
        return max
            
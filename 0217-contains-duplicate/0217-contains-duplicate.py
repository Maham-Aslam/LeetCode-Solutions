class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        counts = collections.Counter(nums)
        return any(counts[i] > 1 for i in nums)
        return False
        
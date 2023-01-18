class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        if(len(nums1) > len(nums2)):
            nums1,nums2 = nums2, nums1
            
        #   count list with short length
        counts = collections.Counter(nums1)
        
        res=[]
        for i in nums2:
            if(counts[i] > 0):
                res.append(i)
                counts[i] -= 1
                
        return res
    
        
        
        print(a[1])
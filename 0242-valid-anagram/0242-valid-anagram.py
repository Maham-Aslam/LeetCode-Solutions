class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        for i in s:
            if i in t:
                s = s.replace(i, '', 1)
                t = t.replace(i, '', 1)
                
        if s == '' and t == '':
            return True
        
        return False
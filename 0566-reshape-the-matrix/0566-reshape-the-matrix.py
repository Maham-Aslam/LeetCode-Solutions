class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        row = len(mat)
        col = len(mat[0])
        
#       matrix  reshape is possible
        if row*col != r*c: return mat
        
        temp = [i for sub in mat for i in sub]
        
        res = []
        start = 0
        for i in range(r):
            res.append(temp[start:start+c])
            start += c
        
        return res
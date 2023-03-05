class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        res = [[1],[1,1]]
        
        for i in range(2,numRows):
            temp = []
            #   1st element will always be 1
            temp.append(1)
            #   compute sum
            size = len(res[i-1])
            for j in range(size-1):
                temp.append(res[i-1][j]+res[i-1][j+1])
            #   last element will always be 1
            temp.append(1)
            #   final result
            res.append(temp)
            
        return res[:numRows]
            
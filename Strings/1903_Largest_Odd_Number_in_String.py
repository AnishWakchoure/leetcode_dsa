class Solution:
    def largestOddNumber(self, num: str) -> str:
        #start from last
        for i in range(len(num)-1, -1, -1):
            if int(num[i])%2 != 0 :
                return num[:i+1]
        return ""
        

#THE BIGGEST HINT IS TO START FROM BACK. MANY FAIL TO IDENTIFY THIS
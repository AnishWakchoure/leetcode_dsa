#BEST APPROACH
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        for i in range(len(digits)-1, -1, -1):
            if digits[i] < 9:
                digits[i] += 1
                return digits   # return directly if last digit aint 9 (less than 9)
            digits[i] = 0
        return [1] + digits     #add 1 in the start cuz of carryover


#WHAT I INITIALLY THOUGHT
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num = 0
        for i in digits:
            num = num*10 + i
        num+=1
        ans = []
        #APPROACH 1 - we directly insert digits in answer array and reverse it 
        while(num>0):
            ans.append(num%10)
            num //= 10
        return ans[::-1]


        #APPROACH 2 - here we use .insert() to insert at 0th index always
        # this shifts all the prior elements to right
        # but this operation makes complexity of inserting alone O(N^2)
        # this not better soln
        '''
        while(num>0):
            ans.insert(0, num%10)
            num //=10
        return ans
        '''
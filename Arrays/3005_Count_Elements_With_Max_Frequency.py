from collections import Counter
class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        freq = Counter(nums)
        '''
        freq = {}
        for i in nums:
            if i in freq:
                freq[i] += 1
            else:
                freq[i] = 1
        '''
        count = 0
        max_freq = max(freq.values())
        for value in freq.values():
            if value == max_freq:
                count += 1
        return max_freq*count
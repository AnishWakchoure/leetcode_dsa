class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        hay = 0
        need = 0
        start = 0

        while(hay<len(haystack)):
            if (haystack[hay] == needle[need]):
                hay+=1
                need+=1
                if (need == len(needle)): return start
            else:
                start += 1
                hay = start
                need = 0
        return -1


'''
Try matching needle starting at each position in haystack.

If a mismatch occurs, restart from the next position. i.e. start += 1

Return the index of the first successful match, or -1 if not found.
'''
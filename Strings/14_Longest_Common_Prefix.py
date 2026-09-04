class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res = ""
        for i  in range(len(strs[0])):
            for s in strs:
                if i== len(s) or s[i] != strs[0][i]:
                    return res
            res += strs[0][i]
        return res


#idr above soln, but below is the latest one.


'''
Sort the strings:
Sorting arranges all strings in lexicographical order. After sorting, the first string and the last string will be the most different.
→ The longest common prefix of the entire list must also be a prefix of these two extremes.

Compare first and last strings:
Loop through characters of the first string and compare them with the corresponding characters of the last string.

If they match → add to the prefix.

If they differ → stop immediately, because no further common prefix exists.

Return the prefix:
The accumulated characters form the longest common prefix.
'''

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs = sorted(strs)
        ans = ""
        for i in range(len(strs[0])):
            if (strs[0][i] != strs[len(strs)-1][i]):
                return ans
            ans += strs[0][i]
        return ans
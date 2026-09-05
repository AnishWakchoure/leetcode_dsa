class Solution:
    def minPairSum(self, nums: List[int]) -> int:
        nums = sorted(nums)
        left = 0
        right = len(nums)-1
        maxi = 0

        while(left<=right):
            maxi = max(maxi, nums[left]+nums[right])
            left+=1
            right-=1
        
        return maxi




'''
Sort the array:
Sorting arranges the numbers from smallest to largest. This makes it easy to pair the smallest with the largest, the second smallest with the second largest, and so on.

Two‑pointer technique:

Use one pointer at the start (left) and one at the end (right).

At each step, compute the pair sum nums[left] + nums[right].

Track the maximum of these sums in maxi.

Move inward (left += 1, right -= 1) until all pairs are formed.

Return the maximum pair sum:
The largest sum encountered is the minimized maximum pair sum.
'''
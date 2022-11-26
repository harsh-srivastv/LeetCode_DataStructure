# https://leetcode.com/problems/maximum-subarray/

class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        max_so_far=nums[0]
        curr_=nums[0]
        for i in range(1,len(nums)):
            curr_=max(nums[i],curr_+nums[i])
            max_so_far=max(max_so_far,curr_)
        return max_so_far
class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        # nums = nums[-k:] + nums[:len(nums)-k]
        # ^This solution doesn't modify nums in-place, but it works
        
        for i in range(k):
            nums.insert(0, nums.pop())
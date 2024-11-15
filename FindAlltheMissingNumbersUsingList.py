class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        return [num for num in range(1, len(nums) + 1) if num not in nums]
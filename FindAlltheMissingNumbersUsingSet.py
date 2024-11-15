class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        actual_set = set(nums)
        expected_set = set(range(1, len(nums) + 1))

        missing_numbers = list(expected_set - actual_set)

        return sorted(missing_numbers)

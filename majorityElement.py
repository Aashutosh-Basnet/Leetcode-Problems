class Solution(object):
    def majorityElement(self, nums):
        count = 1
        majority_element = nums[0]
        i = 1

        while i < len(nums):
            if (nums[i] == majority_element):
                count += 1
            
            else:
                count -= 1

            if count == 0:
                majority_element = nums[i]
                count = 1

            i += 1

        return majority_element
        
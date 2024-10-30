class Solution(object):
    def removeDuplicates(self, nums):
        
        k = 1
        i = 1

        while i <= len(nums) - 1:
            if nums[i] != nums[i - 1]:
                nums[k] = nums[i]
                k += 1
            i += 1

        return k

                
                
        
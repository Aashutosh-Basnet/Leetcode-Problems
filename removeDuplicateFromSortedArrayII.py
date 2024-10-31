class Solution(object):
    def removeDuplicates(self, nums):
        i = 2  
        k = 2  

        while i < len(nums):
            if nums[i] != nums[k - 2]:
                nums[k] = nums[i]  
                k += 1  

            
            i += 1

        return k  
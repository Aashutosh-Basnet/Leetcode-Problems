class Solution(object):
    def removeElement(self, nums, val):
        
        current_index = 0

        for num in nums:
            if num != val:
                nums[current_index] = num
                current_index += 1
        
        while len(nums) > current_index:
            del nums[-1] # or you can use nums.pop()

        return current_index
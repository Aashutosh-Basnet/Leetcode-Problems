class Solution(object):
    def reverse(self, nums, st_index, end_index):
        while st_index < end_index:
            nums[st_index], nums[end_index] = nums[end_index], nums[st_index]
            st_index += 1  
            end_index -= 1  

    def rotate(self, nums, k):
        n = len(nums)
        k = k % n 

        self.reverse(nums, 0, n - 1)

        self.reverse(nums, 0, k - 1)
        
        self.reverse(nums, k, n - 1)

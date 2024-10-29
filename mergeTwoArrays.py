#for storing sorted array in new list
class Solution(object):
    def merge(self, nums1, m, nums2, n):

        i = 0
        j = 0

        nums = []

        while i < m and j < n:

            if nums1 < nums2:
                nums.append(nums1[i])
                i = i + 1

            else:
                nums.append(nums2[j])
                j = j + 1

        while i < m:
            nums.append(nums1[i])
            i = i + 1

        while j < n:
            nums.append(nums2[j])
            j = j + 1

        return nums
    


# storing the merged array in nums1

class Solution:
    def merge(self, nums1, m, nums2, n):

        last = m + n - 1
        i = m - 1
        j = n - 1

        while i >= 0 and j >= 0:
            if nums1[i] > nums2[j]:
                nums1[last] = nums1[i]
                last = last - 1
                i = i - 1

            else:
                nums1[last] = nums2[j]
                last = last - 1
                j = j - 1

        while i >= 0:
            nums1[last] = nums1[i]
            last = last - 1
            i = i - 1

        while j >= 0:
            nums1[last] = nums1[j]
            last = last - 1
            j = j -1

        return nums1


        
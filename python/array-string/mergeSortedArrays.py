from typing import List, TypeVar

T = TypeVar('T') 

def merge_sorted_lists(list1: List[T], list2: List[T]) -> List[T]:

    n1 = len(list1)
    n2 = len(list2)

    result_list = []
    
    idx1 = 0
    idx2 = 0


    while idx1 < n1 and idx2 < n2:
        if list1[idx1] < list2[idx2]:
            result_list.append(list1[idx1])
            idx1 += 1
        else:
            result_list.append(list2[idx2])
            idx2 += 1
            
    result_list.extend(list1[idx1:])
    result_list.extend(list2[idx2:])
    
    return result_list


arr1 = [1, 3, 5, 7]
arr2 = [2, 4, 6, 8]
merged = merge_sorted_lists(arr1, arr2)
print(f"Merged list is: {merged}") 

arr3 = [10, 20]
arr4 = [15, 25, 30, 35]
merged2 = merge_sorted_lists(arr3, arr4)
print(f"Merged list 2 is: {merged2}")

arr5 = []
arr6 = [1, 2, 3]
merged3 = merge_sorted_lists(arr5, arr6)
print(f"Merged list 3 is: {merged3}")
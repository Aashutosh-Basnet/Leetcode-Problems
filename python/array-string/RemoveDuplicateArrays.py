from typing import List, TypeVar

T = TypeVar('T')

def removeDuplicateElement(list: List[T]) -> int:

    if not list:
        return 0

    list_len = len(list)
    k = 1

    for i in range(1, list_len):
        if list[i] != list[k - 1]:
            list[k] = list[i]
            k = k + 1

    return k

    


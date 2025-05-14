from typing import List, TypeVar

T = TypeVar('T')

def removeElement(list: List[T], val: T ):
    k = 0
    """
        dry running the code:
        list = [2, 2, 3, 4, 5]
        val = 3

        k = 0
        let's say the for the first loop 
        i = 0
        list[0] = 2
        list[0] != 3
        
        now, for the second loop
        i = 1
        list[1] = 2
        list[1] != 3

        now, for the third loop
        i = 2
        list[2] = 3
        list[2] == 3(val)

        then list[2] = 2 and k = 1

        now, for the fourth loop
        i = 3
        list[3] = 4
        list[3] != 3

        now, for the fifth loop
        i = 4
        list[4] = 5 
        list[4] != 3

        so we return k = 1
    """

    for i in range(len(list)):
        if list[i] == val:
            list[k] = list[i] 
            k += 1
    return k

list = [1, 1, 3, 4, 5, 6, 7]
val = 1

result = removeElement(list, val);

print(f"k: {result}")
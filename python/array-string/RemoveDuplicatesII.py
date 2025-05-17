def removeDuplicates(list):
    k = 0

    for i in range(len(list)):
        
        if len(list) < 2:
            return len(list)
        
        k = 2
        for i in range(2, len(list)):
            #1, 1, 2, 2, 2, 3, 4
            if list[i] != list[k - 2]: #satisfies for all except the third 2 in the list in which case k remais same and i is incremented by 1
                list[k] = list[i]
                k = k + 1
    return k 


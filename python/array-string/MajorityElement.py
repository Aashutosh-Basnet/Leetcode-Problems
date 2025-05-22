def majority_element(array):
    majority_element = array[0]
    counter = 1

    #example: 3, 2, 1, 2, 4, 5, 6, 7
    for i in range(1, len(array)):
        if array[i] == majority_element:
            counter = counter + 1

        else:
            counter = counter - 1

        if counter == 0:
            majority_element = array[i]
            counter = 1

    return majority_element


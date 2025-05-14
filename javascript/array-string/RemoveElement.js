function removeElement(list, val){
    k = 0

    for(let i = 0; i < list.length ; i++){

        if (list[i] != val) {
            list[k] = list[i];
            k += 1;
        }
    }

    return k;
}

const array1 = [1, 3, 5, 7];

const result = removeElement(array1, 3);
console.log(`k: ${result}`)
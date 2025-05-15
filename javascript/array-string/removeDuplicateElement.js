function removeDuplicateElement(list){

     if (!array || array.length === 0) {
        return 0;
    }

    var k = 1;
    len = list.length;

    for (let i = 1; i < len ; i++){
        if (list[i] != list[k-1]){
            list[k] = list[i]
            k += 1
        }
    }
    return k;
}
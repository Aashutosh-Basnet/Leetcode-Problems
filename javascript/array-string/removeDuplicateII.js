function removeDuplicateII(list){

    if (list.length <= 2) return list.length;

    let k = 2;

    for (let i = 2 ; i < list.length ; i++){
        if (list[i] != list[k-2]){
            list[k] = list[i];
            k += 1;
        }
    }
    return k;
}

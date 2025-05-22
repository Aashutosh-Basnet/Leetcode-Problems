function majority_element(array){
    candidate = array[0];
    counter = 1;

    for(let i = 0; i < array.length; i++){

        if (array[i] == candidate){
            counter += 1;
        }else{
            counter -= 1;
        }

        if (counter == 0){
            candidate = array[i];
            counter = 1;
        }
    }
    return candidate;
}
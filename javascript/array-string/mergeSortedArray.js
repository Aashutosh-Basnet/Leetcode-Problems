function mergeSortedArraysRefactored(array1, array2) {
    const mergedArray = [];
    const n1 = array1.length;
    const n2 = array2.length;

    let p1 = 0; 
    let p2 = 0; 


    while (p1 < n1 && p2 < n2) {
        if (array1[p1] < array2[p2]) {
            mergedArray.push(array1[p1]);
            p1++; 
        } else {
            mergedArray.push(array2[p2]);
            p2++; 
        }
    }

    while (p1 < n1) {
        mergedArray.push(array1[p1]);
        p1++;
    }

    while (p2 < n2) {
        mergedArray.push(array2[p2]);
        p2++;
    }

    return mergedArray;
}

const array1 = [1, 3, 5, 7];
const array2 = [2, 4, 6, 8];
console.log(`Merged array: ${mergeSortedArraysRefactored(array1, array2)}`);


const array3 = [0, 3, 4, 31];
const array4 = [4, 6, 30];
console.log(`Merged array 2: ${mergeSortedArraysRefactored(array3, array4)}`);

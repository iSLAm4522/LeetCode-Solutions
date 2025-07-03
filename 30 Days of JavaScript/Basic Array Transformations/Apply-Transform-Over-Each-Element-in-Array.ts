function map(arr: number[], fn: (n: number, i: number) => number): number[] {
    let returnedArray :number[] = [];
    let index:number = 0;
    while(index < arr.length){
        returnedArray[index] = fn(arr[index], index);
        index++;
    }
    return returnedArray;
};

type Fn = (n: number, i: number) => any

function filter(arr: number[], fn: Fn): number[] {
    const filteredArray : number[] = [];
    arr.forEach((num, index) => {
        if (fn(num, index)) {
            filteredArray.push(num);
        }
    });
    return filteredArray;
};

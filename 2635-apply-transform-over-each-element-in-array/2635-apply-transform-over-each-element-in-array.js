/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const arrN = [];

    for(const elem in arr){
        arrN.push(fn(arr[elem],Number(elem)));
    }

    return arrN;
};
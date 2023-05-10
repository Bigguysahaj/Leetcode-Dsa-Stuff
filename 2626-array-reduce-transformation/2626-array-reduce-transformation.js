/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = (nums, fn, init) => {
    return nums.reduce(fn,init);
};
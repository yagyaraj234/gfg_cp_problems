/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    var val=init;

    nums.map((nm)=>{
        val = fn(val,nm);
    })

    return val;
    
};
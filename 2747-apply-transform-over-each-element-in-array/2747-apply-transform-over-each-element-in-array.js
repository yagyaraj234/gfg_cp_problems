/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let newArr = [];
    arr.map((ar,index)=>{
        // ar = fn(ar);
        newArr.push(fn(ar,index));
    })

    return newArr;
    
};